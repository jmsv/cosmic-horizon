#include "dbstore.h"
#include "print.h"
#include "userin.h"
#include <iostream>
#include <string>
using namespace std;

void find_lasergun()
{
    print("\nYou find a laser gun with rechargeable ammo\n", "green");
    // Laser gun needs to be added to inventory
}

void repair_and_take_off()
{
    print("\nYou go back and repair your ship and you're able to go in to orbit, "
          "hoping to find your space station\n",
        "green");
    // Story continues
}

void scavenge_for_supplies()
{
    print("\nYou go into the first building and find food.\n", "green");

    print("In the next building you find a repair tool-kit.", "magenta");
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
    print("\nYou reach the town and see it has been abandoned.\n", "green");
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
        print("\nYou yell again but still no response. After a while you hear someone approaching. You go out to see who it is , but you are gunned down by desert pirates", "red");
    }
}

void explore_new_planet()
{
    print("\nYou get up and see a small town in the distance.\n", "green");
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
    print("You wake up and find out you are stranded on a\n"
          "foreign planet after you crashed your spaceship.",
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
