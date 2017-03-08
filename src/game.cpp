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
    print("Name: ", "", false);
    string name = "";
    name = get_text();
    std::cout << "Hello, " << name << "!\n";

    create_user_database(name);

    print("\n" + get_ascii_title(), "cyan");

    print("Do you want to play Cosmic Horizon? ");
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
