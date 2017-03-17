#include <string>
using namespace std;

class Database{
    private:
        int write_recent_user(string name);
        string get_recent_user_name();
        string get_recent_user_db_filepath();
    public:
        int create_user_database(string player_name);
        int add_to_inventory(string itemName, string got = "true");
        int remove_from_inventory(string itemName);
        bool do_i_have(string itemName);
};
