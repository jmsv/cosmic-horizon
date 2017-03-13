#include "misc.h"
#include "print.h"
#include <fstream>
#include <iostream>
#include <limits.h>
#include <sqlite3.h>
#include <sstream>
#include <string>
#include <unistd.h>
using namespace std;

static int callback(void* NotUsed, int argc, char** argv, char** azColName)
{
    int i;
    string output = "";
    for (i = 0; i < argc; i++) {
        //printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
        output += (string)azColName[i];
        output += " = ";
        output += (string)(argv[i] ? argv[i] : "NULL");
        output += "\n";
    }
    print(output);
    return 0;
}

int write_recent_user(string name)
{
    ofstream file;
    file.open("most-recent-user.txt");
    file << name;
    file.close();
    return 0;
}

string get_recent_user_name()
{
    ifstream infile("most-recent-user.txt");

    string text = "";
    if (infile.good()) {
        string sLine;
        getline(infile, sLine);
        text = sLine;
    }
    infile.close();

    return text;
}

int create_user_database(string player_name)
{
    sqlite3* db;
    char* zErrMsg = 0;
    int rc;
    char* sql;

    player_name = to_lower_case(player_name);
    string databaseName = "save-" + player_name + ".db";

    // Open database
    rc = sqlite3_open(databaseName.c_str(), &db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return (0);
    }
    // Create SQL statement
    sql = (char*)"CREATE TABLE INVENTORY("
                 "NAME     TEXT     NOT NULL  PRIMARY KEY,"
                 "GOT      BOOLEAN  NOT NULL"
                 ");";

    // Execute SQL statement
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        string zErrMsg_str = zErrMsg;
        string tableExists = "table INVENTORY already exists";
        if (tableExists == zErrMsg_str) {
            print("Loaded " + databaseName);
        } else {
            print(zErrMsg_str);
            sqlite3_free(zErrMsg);
        }
    } else {
        print("Created database " + databaseName);
        write_recent_user(player_name);
    }

    sqlite3_close(db);
    return 0;
}

string get_recent_user_db_filepath()
{
    char result[PATH_MAX];
    ssize_t count = readlink("/proc/self/exe", result, PATH_MAX);
    string path = string(result, (count > 0) ? count : 0);
    string toRemove = "bin/cosmic-horizon.o";
    path.erase(path.find(toRemove), toRemove.length());
    path += "save-";
    path += get_recent_user_name();
    path += ".db";
    return path;
}

int add_to_inventory(string itemName, string got)
{
    // Add item to database
    string databaseName = get_recent_user_db_filepath();

    sqlite3* db;
    char* zErrMsg = 0;
    int rc;
    char* sql;

    // Open database
    rc = sqlite3_open(databaseName.c_str(), &db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return (0);
    }

    // Create SQL statement
    string sqlString = "";
    sqlString = "INSERT INTO INVENTORY ("
                "NAME, GOT"
                ") VALUES ("
                "\""
        + itemName + "\", \"" + got + "\""
                                      ");";
    sql = (char*)sqlString.c_str();

    // Execute SQL statement
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        string zErrMsg_str = zErrMsg;
        if (zErrMsg_str == "UNIQUE constraint failed: INVENTORY.NAME") {
            print(itemName + " already in database");
        } else {
            print(zErrMsg_str);
        }
        sqlite3_free(zErrMsg);
    } else {
        print("Added " + itemName + " to database");
    }

    sqlite3_close(db);
    return 0;
}

int remove_from_inventory(string itemName)
{
    // Remove item from database
    return 0;
}

bool do_i_have(string itemName)
{
    sqlite3* db;
    char* zErrMsg = 0;
    int rc;

    string databaseName = get_recent_user_db_filepath();

    // Open database
    rc = sqlite3_open(databaseName.c_str(), &db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return false;
    }

    sqlite3_stmt* stmt;
    const char* sql = "SELECT * FROM INVENTORY";
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        print("error: ", sqlite3_errmsg(db));
        return false;
    }
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        string name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        string got = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        string callbackString = name + (string) "=" + got;
        string existsString = itemName + (string) "=" + got;
        if (callbackString.find(existsString) != string::npos) {
            return true;
        }
    }
    if (rc != SQLITE_DONE) {
        print("error: ", sqlite3_errmsg(db));
    }
    sqlite3_finalize(stmt);

    sqlite3_close(db);
    return false;
}
