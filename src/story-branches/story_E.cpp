#include "../dbstore.h"
#include "../print.h"
#include "../story_item.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;

Database db_sE = Database();

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
    StoryItem* AttackPirateItem = new StoryItem();
    AttackPirateItem->preText = ".\n You've finally had enough and have decide to", "green"
                                                                                    ".\n The ships look military but something seems off about them...";
    ".\n start an all out assault on the pirates on the station"
    ".\n You grab some weapons and decide to come up with a plan of attack";

    AttackPirateItem->preTextColour = "magenta";
    AttackPirateItem->prompt = "Do you?";

    AttackPirateItem->options = {
        "Attempt to clear the staton room by room?", //1
        "Go staight for the pirates leader and take him out", //2
        "Stay put and wait for the pirates to come to you?", //3
    };

    int choice = AttackPirateItem->run();
    if (choice == 1) {
        Clear_Station();
    } else if (choice == 2) {
        Hallway();
    } else if (choice == 3) {
        print("The pirates throw a grenade on the room killing you");
    }
}

void lock_doors()
{
    StoryItem* LockDoorsItem = new StoryItem();
    LockDoorsItem->preText = ".\n You quickly lock the doors preventing anyone from coming into the armory", "green"
                                                                                                             ".\n Your options are limited";
    LockDoorsItem->preTextColour = "magenta";
    LockDoorsItem->prompt = "Do you?";

    LockDoorsItem->options = {
        "Weapon up and attack the pirates?", //1
        "Set traps around the armory and hide", //2
        "Open the doors and try to escape?", //3
    };

    int choice = LockDoorsItem->run();
    if (choice == 1) {
        Start_Attack();
    } else if (choice == 2) {
        print("While attempting to set traps the pirates blow open the doors and shoot you");
    } else if (choice == 3) {
        print("As soon as the doors open. you get shot in the face");
    }
}

void vents()
{
    StoryItem* VentsItem = new StoryItem();
    VentsItem->preText = ".\n You crawl though the vents and try to find an exit", "green"
                                                                                   ".\n You end up falling through an exit and land right near some pirates"
                                                                                   ".\n They pull out their weapons and are about to fire";
    VentsItem->preTextColour = "magenta";
    VentsItem->prompt = "Do you?";

    VentsItem->options = {
        "Attempt to kill the pirates before they kill you?", //1
        "Quickly dive behind some cover then fire back?", //2
        "Surrender and hope that they don't kill you?", //3
    };

    int choice = VentsItem->run();
    if (choice == 1) {
        Attack_pirates();
    } else if (choice == 2) {
        print("There is no cover in the hallway and the pirates kill you");
    } else if (choice == 3) {
        print("The pirates kill you on sight");
    }
}

void kill_pirates()
{
    StoryItem* KillPiratesItem = new StoryItem();
    KillPiratesItem->preText = ".\n You pull out your sidearm and open fire on the pirates", "green"
                                                                                             ".\n You manage to kill both of them however"
                                                                                             ".\n now the pirates know where you are";
    KillPiratesItem->preTextColour = "magenta";
    KillPiratesItem->prompt = "Do you?";

    KillPiratesItem->options = {
        "Attempt to hide nearby?", //1
        "Lock the door and by time to think of a plan?", //2
        "surrender and hope the pirates don't kill you?", //3
    };

    int choice = KillPiratesItem->run();
    if (choice == 1) {
        print("The pirates find you and kill you");
    } else if (choice == 2) {
        lock_doors();
    } else if (choice == 3) {
        print("The pirates shoot you on sight killing you");
    }
}

void armory()
{
    StoryItem* ArmoryItem = new StoryItem();
    ArmoryItem->preText = ".\n You walk into the armory and see that it has been ransacked, however you notice that there is still some ammo left", "green"
                                                                                                                                                    ".\n You take the ammo and save it for later"
                                                                                                                                                    ".\n You hear footsteps, some pirates are on their way";
    ArmoryItem->preTextColour = "magenta";
    ArmoryItem->prompt = "Do you?";

    ArmoryItem->options = {
        "Hide and hope that they don't see you?", //1
        "Attack the pirates when they walk through the door?", //2
        "Escape through the vent system?", //3
    };

    int choice = ArmoryItem->run();
    if (choice == 1) {
        print(".\n The pirates see you hiding and shoot you");
    } else if (choice == 2) {
        kill_pirates();
    } else if (choice == 3) {
        vents();
    }
}

void attack_pirate()
{
    StoryItem* AttackPirateItem = new StoryItem();
    AttackPirateItem->preText = ".\n You attack the pirate and manage to kill him, then search his body for useful items", "green"
                                                                                                                           ".\n You check the map again and decide which part of the station to go to";
    AttackPirateItem->preTextColour = "magenta";
    AttackPirateItem->prompt = "Do you?";

    AttackPirateItem->options = {
        "Go to the medbay?", //1
        "Go to the armory?", //2
        "Go to the cafeteria?", //3
    };

    int choice = AttackPirateItem->run();
    if (choice == 1) {
        print(".\n The medbay is filled with pirates and they open fire on you");
    } else if (choice == 2) {
        armory();
    } else if (choice == 3) {
        print("The cafeteria is filled with pirates eating lunch and they open fire on you");
    }
}

void board_station()
{
    StoryItem* BoardStationItem = new StoryItem();
    BoardStationItem->preText = ".\n You board the space station and look around for a map", "green"
                                                                                             ".\n The map shows the entire layout of the station, as well as the number of people aboard"
                                                                                             ".\n You see a shadow down the hall, someone is coming this way";
    BoardStationItem->preTextColour = "magenta";
    BoardStationItem->prompt = "Do you?";

    BoardStationItem->options = {
        "Attempt to reason with the person", //1
        "Hide and hope that he doesn't see you?", //2
        "Attack him while he's off guard?", //3
    };

    int choice = BoardStationItem->run();
    if (choice == 1) {
        print(".\n The pirate shoots you in the face as soon as he sees you");
    } else if (choice == 2) {
        print(".\n The pirate notices you hiding and shoots you");
    } else if (choice == 3) {

        db_sE.add_to_inventory("Pistol");

        if (db_sE.do_i_have("Pistol")) {
            print("You struggle with the pirate but manage to shoot him with his own gun");
        } else {
            print("You struggle with the pirate");
        }
        attack_pirate();
    }
}

void start_story_E()
{
    StoryItem* startStoryItem = new StoryItem();
    startStoryItem->preText = ".\n While attempting to dock at the station you see that there are multiple ships already docked", "green"
                                                                                                                                  ".\n The ships look military but something seems off about them...";
    ".\n The ships look military but something seems off about then...";
    startStoryItem->preTextColour = "magenta";
    startStoryItem->prompt = "Do you?";

    startStoryItem->options = {
        "Attempt to make contact with the ships", //1
        "Attempt to find a different air lock?", //2
        "Ram into one of the ships and take it out?", //3
    };

    int choice = startStoryItem->run();
    if (choice == 1) {
        print(".\n The ships open fire on you and destroy your ship");
    } else if (choice == 2) {
        board_station();
    } else if (choice == 3) {
        print(".\n You ram into one of the ships blowing yourself up", "red");
    }
}
