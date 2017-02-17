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
    //database_test();
    /*
    print("Name: ", "", false);
    string name = "";
    name = get_name();
    std::cout << "Hello, " << name << "!\n";
    */

    /*
    print("red test", "red");
    print("blue test", "blue");
    print("green test", "green");
    print("yellow test", "yellow");
    print("magenta test", "magenta");
    print("cyan test", "cyan");
    print();
    */

    print("\n" + get_ascii_title(), "yellow");

    // Database load/create needs to be implemented

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
