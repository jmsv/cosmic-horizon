#include "dbstore.h"
#include "print.h"
#include "story-branches/story_B.h"
#include "story-branches/story_D.h"
#include "story-branches/story_E.h"
#include "story-branches/story_L.h"
#include "story-branches/story_S.h"
#include "userin.h"
#include <iostream>
#include <string>
using namespace std;

Database db_s = Database();

void story_join_pirates()
{
    start_story_S();
}
void story_line_guns_blazeing()
{
    start_story_E();
}

void story_line_stealth()
{
    print("\nYou managed to enter the space station through the garbage disposal unit\n", "green");
    start_story_D();
}

void find_lasergun()
{
    print("\nYou find a laser gun with rechargeable ammo\n", "green");

    db_s.add_to_inventory("Lazer gun");

    if (db_s.do_i_have("Lazer gun")) {
        print("You now have a Lazer gun");
    } else {
        print("You do not have a Lazer gun");
    }
}

void repair_and_take_off()
{
    print("\nYou go back and repair your ship and you're able to go in to orbit, hoping to find your space station.\n ", "green");
    print("\nAs you're exiting the atmosphere of the Gem-435-ini, in the distance you see your space station, \n"
          "but there is already a ship docked. As you examine the ship thoroughly you come to the conclusion that\n"
          "this ship is not anyone from Earth, so...\n",
        "magenta");
    print("Do you:");
    print("1) Attempt to dock else where ");
    print("2) Leave your ship without docking and use you space suit to board silently");
    print("3) Attempt to contact who ever is aboard");

    int choice = int_option(3);

    if (choice == 1) {
        story_line_guns_blazeing();
    } else if (choice == 2) {
        story_line_stealth();
    } else if (choice == 3) {
        story_join_pirates();
    }
}

void scavenge_for_supplies()
{
    print("\nYou go into the first building and find carefully stashed protein rich molecular bars.\n", "green");

    print("After looking through other buildings trying to find something to survive you see something hidden behind\n"
          "an empty rocket fuel barrel. You move the barrel and see it's a space diagnostics examinator and a fully\n"
          "automatic repair robot kit.\n",
        "magenta");
    print("Do you:");
    print("1) Keep looking for supplies");
    print("2) Rush to your ship");

    int choice = int_option(2);

    if (choice == 1) {
        find_lasergun();
        repair_and_take_off();
    }
    if (choice == 2) {
        repair_and_take_off();
    }
}

void shout_for_help()
{
    print("\nYou yell for help, but there is  no responce.", "green");

    print("\nYou find some leftover food and repairing tool kit.\n", "green");
    print("Do you:");
    print("1) Go back to your ship immediately");
    print("2) Stay for the night");
    print("3) Call again for help");

    int answer = int_option(3);

    if (answer == 1) {
        repair_and_take_off();
    }
    if (answer == 2) {
        print("\nYou stay for the night and in the morning you find yourself on the other end of a gun and you get shot in the head by desert pirates", "red");
    }
    if (answer == 3) {
        print("\nYou yell again but still no response. After a while you hear someone approaching. You go out to see who it is , but you are gunned down by desert pirates", "red");
    }
}

void go_to_the_town()
{
    print("\nYou reach the town and see it has been abandoned. It has a scary vibe and looked like\n"
          "it had been under attack at some point.\n",
        "green");
    print("What do you do?");
    print("1) Have a look around quietly ");
    print("2) Go back to your ship ");
    print("3) Shout for help");

    int choice = int_option(3);

    if (choice == 1) {
        scavenge_for_supplies();
    } else if (choice == 2) {
        print("\nYou stayed in the wrecked ship for 6 days before you starved to death", "red");
    } else if (choice == 3) {
        shout_for_help();
    }
}

void explore_new_planet()
{
    print("\nYou get up and climb the capsule, so that you can examine the terrain around you.\n"
          "After staring in the distance for a while you spot a small town.\n",
        "green");
    print("Do you go to the town?: ");
    bool choice;
    choice = yes_or_no();

    if (choice) {
        go_to_the_town();
    } else {
        print("\nYou stayed in the wrecked ship for 6 days before you starved to death", "red");
    }
}

void start_story()
{
    print("You wake up in an emergency space ejection capsule with a severe headache and empty stomach.\n"
          "The last thing you remember was prepairing your space station to maintain orbit around a hostile\n"
          "planet called Gem-435-ini. You don't remember how you ended up here, so you try to contact your\n"
          "space station but the coms in the capsule are broken. Left with no food and way to establish contact\n"
          "with your crew members, you try to gather your thoughts and figure out how to get back up there.\n",
        "magenta");
    print("What do you do?");
    print("1) Kill yourself");
    print("2) Get up and explore");
    print("3) Stay in the wrecked ship and wait for help");

    int choice = int_option(3);

    if (choice == 1) {
        print("\nYou put a spike on the ground and climb on top of your ship. You jump and while you are falling you see a small town in the distance, but it's too late and you die.", "red");
    } else if (choice == 2) {
        explore_new_planet();
    } else if (choice == 3) {
        print("\nYou stayed in the wrecked ship for 6 days before you starved to death", "red");
    }
}
