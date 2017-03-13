#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <string>
using namespace std;

void ship_gone()
{
}

void mobile_phone_found()
{
}

void found_help()
{
    print("On the island, you have found a small abanded house.\n"
          "You start to explore the house to find a way to communicate\n"
          "to you leader back home",
        "magenta");
    print("Whilst exploring the house, you see a room filled with weapons", "magenta");
    print("What do you do?", "blue");

    print("1. Take some of the weapons and go back to your ship");
    print("2. Leave the weapons and carry on searching for a communication method");
    print("3. Use on the guns to shoot yourself");

    int choice = int_option(3);

    if (choice == 1) {
        ship_gone();
    } else if (choice == 2) {
        mobile_phone_found();
    } else if (choice == 3) {
        print("\n You are now dead, Game over", "Red");
    }
}

void start_B()
{
    //Just starters
    print("You wake up to find that you are on a\n"
          "wrecked ship, on a deserted island",
        "magenta");
    print("You get up and see something in the distant", "magenta");
    print("Do you....?", "blue");

    print("1. Walk towards the object");
    print("2. Run the opposite direction to find help");
    print("3. Piss yourself and cry in your ship");

    int choice = int_option(3);

    if (choice == 1) {
        print("\nYou see that the object is moving towards you whilst holding a odd looking weapon in its hand. It starts shooting at you and you are now dead", "Red");
    } else if (choice == 2) {
        found_help();
    } else if (choice == 3) {
        print("\n You have been crying for a week and you eventually die from the smell of your piss. Game over", "Red");
    }
}
