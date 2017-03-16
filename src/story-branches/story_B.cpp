#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <string>
using namespace std;

/*void find_oddfood()
{
}

void knocking_on_door()
{
    print("You hear a knock on the house door and get frightened,.\n "
          "You dont know who it could be and have to decide.",
        "magenta");

    print("Do you open the door, Y=1 or N=2?", "magenta");

    //int choice = house_knock(2);

    if (choice == 1) {
        print("The creature attacks you, you are now dead", "red");

    } else if (choice == 2) {
        print("You leave it and hide upstairs");
    }
}

void ship_gone()
{
    print("You have gone back to look for your ship, but you find.\n "
          "that it is now missing and there is no sight of it.",
        "magenta");
    print("Do you?", "magenta");

    print("1. Run and hide where you cant be seen");
    print("2. Go back to the house");
    print("3. Sit and hope for your ship to magically appear");

    //int choice = ships_option(3);

    if (choice == 1) {
        print("You hide for a few hours, end up getting bored and hungry. You go to find food");
        find_oddfood
    } else if (choice == 2); {
        print("You go back to the house and find that the house has disappeared too");
    } else if (choice == 3) {
        print("A group of two headed dwarfs come to eat you, you are now dead", "red");
    }
}

void fuel_found()
{
    print("Instead of finding a communication method,.\n "
          "you stumble upon some fuel, you decide whether you should.\n"
          "or leave it",
        "magenta");
    print("Do you pick it up, Y=1 or N=2?", "magenta");

    //int choice = fuel_option(2);

    if (choice == 1) {
        print("The fuel has been added to your inventory");
        knocking_on_door();
    } else if (choice == 2) {
        print("You leave it and decide to go back to your ship");
        ship_gone();
    }
}
*/

void ship_gone
{
    
}


void fuel_found()
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
        fuel_found();
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
