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
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
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

string get_recent_user_db()
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

int add_to_inventory(string item_name)
{
    // Add item to database
    char result[PATH_MAX];
    ssize_t count = readlink("/proc/self/exe", result, PATH_MAX);
    string path = string(result, (count > 0) ? count : 0);
    string toRemove = "bin/cosmic-horizon.o";
    path.erase(path.find(toRemove), toRemove.length());
    string databaseName = path;
    databaseName += "save-";
    databaseName += get_recent_user_db();
    databaseName += ".db";
    print(databaseName);

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
        + item_name + "\", \"true\""
                      ");";
    print(sqlString);
    sql = (char*)sqlString.c_str();

    // Execute SQL statement
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        string zErrMsg_str = zErrMsg;
        print(zErrMsg_str);
        sqlite3_free(zErrMsg);
    } else {
        print("Added " + item_name + " to database");
    }

    sqlite3_close(db);
    return 0;
}

int remove_from_inventory(string item_name)
{
    // Remove item from database
    return 0;
}

bool do_i_have(string item_name)
{
    // Check database to see if user has item
    // Return true if user has item
    return false;
}
