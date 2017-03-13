#include <string>
using namespace std;

int database_test();
int create_user_database(string player_name);
int add_to_inventory(string itemName, string got = "true");
//int remove_from_inventory(string itemName);
bool do_i_have(string itemName);
