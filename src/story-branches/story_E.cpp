#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;

void Clear_Station()
{
    print("hello");
}

void Hallway()
{
    print("hello");
}

void Start_Attack()
{
    print("hello");
}

void Attack_pirates()
{
    print("You've finally had enough and have decide to");
    print("start an all out assault on the pirates on the station");
    print("You grab some weapons and decide to come up with a plan of attack");
    print("Do you?");

    print("1)Attempt to clear the station room by room?");
    print("2)Go staight for the pirates leader and take him out?");
    print("3)Stay put and wait for the pirates to come to you?");

    int choice = int_option(3);

    if (choice == 1) {
        Clear_Station();
    }
    if (choice == 2) {
        Hallway();
    }
    if (choice == 3) {
        print("The pirates throw a gernade on the room killing you");
    }
}

void lock_doors()
{
    print("You quickly lock the doors preventing anyone from coming int");
    print("However,now you have no way out");
    print("You options are limited do you?");

    print("1) Weapon up and attack the pirates?");
    print("2) Set traps around the armory and hide?");
    print("3) Open the doors and try to escape?");

    int choice = int_option(3);

    if (choice == 1) {
        Start_Attack();
    }
    if (choice == 2) {
        print("While attempting to set traps the pirates blow open the doors and shoot you");
    }
    if (choice == 3) {
        print("As soon as the doors open. you get shot in the face");
    }
}

void vents()
{
    print("You crawl though the vents and try to find an exit");
    print("You end up falling through an exit and land right near some pirates");
    print("They pull out their weapons and are about to fire");
    print("Do you?");

    print("1) Attempt to kill the pirates before they kill you?");
    print("2) Quickly dive behind some cover then fire back");
    print("3) Surrender and hope that they don't kill you");

    int choice = int_option(3);

    if (choice == 1) {
        Attack_pirates();
    }
    if (choice == 2) {
        print("There is no cover in the hallway and the pirates kill you");
    }
    if (choice == 3) {
        print("The pirates kill you on sight");
    }
}

void kill_pirates()
{
    print("\n You pull out your sidearm and open fire on the pirates");
    print("You manage to kill both of them however,");
    print("now the pirates know where you are");
    print("Do you?");

    print("1) Attempt to hide nearby?");
    print("2) Lock the door and by time to think of a plan");
    print("3) surrender and hope the pirates don't kill you");

    int choice = int_option(3);

    if (choice == 1) {
        print("The pirates find you and kill you");
    }
    if (choice == 2) {
        lock_doors();
    }
    if (choice == 3) {
        print("The pirates shoot you on sight killing you");
    }
}

void armory()
{
    print("\n You walk into the armory and see that it has been ransacked, however you notice that there is still some ammo left");
    print("\n You take the ammo and save it for later");
    print("\n You hear footsteps, some pirates are on their way");
    print("\n Do you?");

    print("1) Hide and hope that they don't see you");
    print("2) Attack the pirates when they walk through the door");
    print("3) Escape through the vent system");

    int choice = int_option(3);

    if (choice == 1) {
        print("\n The pirates see you hiding and shoot you");
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
    print("\n You attack the pirate and manage to kill him, then search his body for useful items");
    print("\n You take the pirates sidearm to defend yourself with");
    print("\n You check the map again and decide which part of the station to go to");

    print("1) Go to the medbay?");
    print("2) Go to the armory?");
    print("3) Go to the cafeteria?");

    int choice = int_option(3);

    if (choice == 1) {
        print("\n The medbay is filled with pirates and they open fire on you");
    }
    if (choice == 2) {
        armory();
    }
    if (choice == 3) {
        print("\n The cafeteria is filled with pirates eating lunch and they open fire on you");
    }
}

void board_station()
{
    print("\n You board the space station and look around for a map");
    print("\n The map shows the entire layout of the station, as well as the number of people aboard");
    print("\n You see a shadow down the hall, someone is coming this way");
    print("\n do you?");

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
    print("\n While attempting to dock at the station you see that there are multiple ships already docked", " magenta");
    print("\n The ships look military but something seems off about them...", "magenta");
    print("\n Do you:", "blue");

    print("1) Attempt to make contact with the ships?");
    print("2) Attempt to find a different air lock?");
    print("3) Ram into one of the ships and take it out?");

    int choice = int_option(3);

    if (choice == 1) {
        print("\n The ships open fire on you and destory your ship", "red");
    }
    if (choice == 2) {
        board_station();
    }
    if (choice == 3) {
        print("\n Ramming the ship casued both ships to explode", "red");
    }
}
