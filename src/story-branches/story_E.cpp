#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;

void board_station()
{
    print(".\n hello"); // ...
}

void start_story_E()
{
    print(".\n While attempting to dock at the station you see that there are multiple ships already docked", " magenta");
    print(".\n The ships look military but something seems off about them...", "magenta");
    print(".\n Do you:", "blue");

    print("1) Attempt to make contact with the ships?");
    print("2) Attempt to find a different air lock?");
    print("3) Ram into one of the ships and take it out?");

    int choice = int_option(3);

    if (choice == 1) {
        print(".\n The ships open fire on you and destory your ship");
    }
    if (choice == 2) {
        board_station();
    }
    if (choice == 3) {
        print(".\n Ramming the ship casued both ships to explode");
    }
}
