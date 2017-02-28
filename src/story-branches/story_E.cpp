#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;

void vents()
{
    print(".\n hello");
}

void kill_pirates()
{
    print(".\n hello");
}

void armory()
{
    print(".\n You walk into the armory and see that it has been ransacked, however you notice that there is still some ammo left");
    print(".\n You take the ammo and save it for later");
    print(".\n You hear footsteps, some pirates are on their way");
    print(".\n Do you?");

    print("1) Hide and hope that they don't see you");
    print("Attack the pirates when they walk through the door");
    print("escape through the vent system");

    int choice = int_option(3);

    if (choice == 1) {
        print(".\n The pirates see you hiding and shoot you");
    }
    if (choice == 2) {
        kill_pirates();
    }
    if (choice == 3) {
        vents();
    }
}

void attack_pirate()
{
    print(".\n You attack the pirate and manage to kill him, then search his body for useful items");
    print(".\n You take the pirates sidearm to defend yourself with");
    print(".\n You check the map again and decide which part of the station to go to");

    print("1) Go to the medbay?");
    print("2) Go to the armory?");
    print("3) go to the cafeteria");

    int choice = int_option(3);

    if (choice == 1) {
        print(".\n The medbay is filled with pirates and they open fire on you");
    }
    if (choice == 2) {
        armory();
    }
    if (choice == 3) {
        print(".\n The cafeteria is filled with pirates eating lunch and they open fire on you");
    }
}

void board_station()
{
    print(".\n You board the space station and look around for a map");
    print(".\n The map shows the entire layout of the station, as well as the number of people aboard");
    print(".\n You see a shadow down the hall, someone is coming this way");
    print(".\n do you?");

    print("1) Attempt to reason with the person");
    print("2) Hide and hope that he doesn't see you");
    print("3) Attack him while he's off guard");

    int choice = int_option(3);

    if (choice == 1) {
        print(".\n The pirate shoots you in the face as soon as he sees you");
    }
    if (choice == 2) {
        print(".\n The pirate notices you hiding and shoots you");
    }
    if (choice == 3) {
        attack_pirate();
    }
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
