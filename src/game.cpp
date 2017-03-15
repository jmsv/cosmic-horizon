#include "dbstore.h"
#include "misc.h"
#include "print.h"
#include "story.h"
#include "userin.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    print("\n" + get_ascii_title(), "cyan");

    print("Name: ", "", false);
    string name = "";
    name = get_text(true);
    print("Hello, " + name + "!");

    Database db = Database();
    db.create_user_database(name);

    // How to add item to inventory:
    db.add_to_inventory("potato");

    // How to check if inventory contains something:
    if (db.do_i_have("avocado")) {
        print("you have an avocado  :D");
    } else {
        print("you do not have an avocado  :'(");
    }

    print("\nDo you want to play Cosmic Horizon? ");
    bool choice;
    choice = yes_or_no();
    if (choice) {
        print("Let's begin.\n");
        start_story(); // Start game
    }

    print("\nGame over!", "cyan");
    print("");
    return 0;
}
