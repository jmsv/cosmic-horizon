#include "dbstore.h"
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
    // Callback for executing SQL statements
    int i;
    string output = "";
    // Generate output string from arguments
    for (i = 0; i < argc; i++) {
        output += (string)azColName[i];
        output += " = ";
        output += (string)(argv[i] ? argv[i] : "NULL");
        output += "\n";
    }
    print(output);
    return 0;
}

int Database::write_recent_user(string name)
{
    // Write most recent database username to text file
    ofstream file;
    // Open file
    file.open("most-recent-user.txt");
    // Write name to file
    file << name;
    // Close file
    file.close();
    return 0;
}

string Database::get_recent_user_name()
{
    // Get most recent dayabase username from text file
    ifstream infile("most-recent-user.txt");

    string text = "";
    if (infile.good()) {
        string sLine;
        getline(infile, sLine);
        // Read text
        text = sLine;
    }
    // Close file
    infile.close();

    return text;
}

int Database::create_user_database(string player_name)
{
    // Makes a new database called 'save-[username].db
    sqlite3* db;
    char* zErrMsg = 0;
    int rc;
    char* sql;

    // Get lower case version of username
    player_name = to_lower_case(player_name);
    // Construct database name
    string databaseName = "save-" + player_name + ".db";

    // Open database
    rc = sqlite3_open(databaseName.c_str(), &db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return (0);
    }

    // Create SQL statement to create inventory table
    sql = (char*)"CREATE TABLE INVENTORY("
                 "NAME     TEXT     NOT NULL  PRIMARY KEY,"
                 "GOT      BOOLEAN  NOT NULL"
                 ");";

    // Execute SQL statement
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        // SQL error
        string zErrMsg_str = zErrMsg;
        string tableExists = "table INVENTORY already exists";
        if (tableExists == zErrMsg_str) {
            // If table exists, database is loaded
            print("Loaded " + databaseName);
        } else {
            print(zErrMsg_str);
            sqlite3_free(zErrMsg);
        }
    } else {
        // Table is written successfully
        print("Created database " + databaseName);
        write_recent_user(player_name);
    }

    // Close database
    sqlite3_close(db);
    return 0;
}

string Database::get_recent_user_db_filepath()
{
    // Get full filepath of user database
    char result[PATH_MAX];
    // Get currect location
    ssize_t count = readlink("/proc/self/exe", result, PATH_MAX);
    string path = string(result, (count > 0) ? count : 0);
    // Modify to get to target directory
    string toRemove = "bin/cosmic-horizon.o";
    path.erase(path.find(toRemove), toRemove.length());
    // Add database filename
    path += "save-";
    path += get_recent_user_name();
    path += ".db";
    return path;
}

int Database::add_to_inventory(string itemName, string got)
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
        // Error opening database
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return (0);
    }

    // Create SQL statement to insert item name
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
            print("You already have a " + itemName + ".");
        } else {
            // Print error
            print(zErrMsg_str);
        }
        sqlite3_free(zErrMsg);
    } else {
        print("Added " + itemName + " to your inventory.");
    }

    // Close database
    sqlite3_close(db);
    return 0;
}

int Database::remove_from_inventory(string itemName)
{
    // Remove item from database
    return 0;
}

bool Database::do_i_have(string itemName)
{
    sqlite3* db;
    char* zErrMsg = 0;
    int rc;

    string databaseName = get_recent_user_db_filepath();

    // Open database
    rc = sqlite3_open(databaseName.c_str(), &db);
    if (rc) {
        // Error
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return false;
    }

    sqlite3_stmt* stmt;
    // SQL select statement
    const char* sql = "SELECT * FROM INVENTORY";
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        print("error: ", sqlite3_errmsg(db));
        return false;
    }
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        // Get each table column and row
        string name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        string got = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        // Generate name+got
        string callbackString = name + (string) "=" + got;
        // Generate string to test for
        string existsString = itemName + (string) "=" + got;
        if (callbackString.find(existsString) != string::npos) {
            // If test string is callback string
            // Item is in database
            sqlite3_finalize(stmt);
            // Close database before returning
            sqlite3_close(db);
            return true;
        }
    }
    if (rc != SQLITE_DONE) {
        print("error: ", sqlite3_errmsg(db));
    }
    sqlite3_finalize(stmt);

    // Close database
    sqlite3_close(db);
    return false;
}
