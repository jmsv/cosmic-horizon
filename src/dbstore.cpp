#include "misc.h"
#include "print.h"
#include <sqlite3.h>
#include <sstream>
#include <string>
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
                 "ID       INT      NOT NULL   PRIMARY KEY,"
                 "NAME     TEXT     NOT NULL,"
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
    }
    
    sqlite3_close(db);
    return 0;
}

int add_to_inventory(string item_name)
{
    // Add item to database
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
