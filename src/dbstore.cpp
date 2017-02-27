#include <sqlite3.h>
#include <string>
using namespace std;

int database_test()
{
    sqlite3* db;
    char* zErrMsg = 0;
    int rc;

    rc = sqlite3_open("database/test.db", &db);

    if (rc) {
        return (0);
    } else {
        return 1;
    }
    sqlite3_close(db);

    return 0;
}

int create_database(string user)
{
    // Create database called [user].db
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
