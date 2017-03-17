#include "../print.h"
#include <string>
using namespace std;

void start_L()
{
    //Start 
    print("You see the distant gleam of metal not too far from where you are. a\n"
          "As you make your way towards it you realise it is part of a massive group of structures", "Magenta");
    print("You wonder what plan you should go with now.", "Magenta");
    print("Do you....?", "Magenta");

    print("1. Sneak towards the buildings", "Blue");
    print("2. Hide where you are and wait for movement from the buildings", "Blue");
    print("3. Make your way back to the ship to gather supplies", "Blue");

    int choice = int_option(3);

    if (choice == 1) {
        discovering_base();
	} else if (choice == 2) {
        patrol_unit();
    } else if (choice == 3) {
        drone();
    }
}

void discovering_base()
{
	print("You make your way towards the base while keeping an eye out for any movement. a\n"
          "There is a doorway that you walk into", "Magenta");
    print("Story.", "Magenta");
    print("Do you....?", "Magenta");

    print("1. Sneak towards the buildings", "Blue");
    print("2. Hide where you are and wait for movement from the buildings", "Blue");
    print("3. Make your way back to the ship to gather supplies", "Blue");

    int choice = int_option(3);

    if (choice == 1) {
        discovering_base();
	} else if (choice == 2) {
        patrol_unit();
    } else if (choice == 3) {
        drone();
    }
}

void patrol_unit()
{
	print("Story. a\n"
          "Story", "Magenta");
    print("You wonder what plan you should go with now.", "Magenta");
    print("Do you....?", "Magenta");

    print("1. Option1", "Blue");
    print("2. Option2", "Blue");
    print("3. Option2", "Blue");

    int choice = int_option(3);

    if (choice == 1) {
        discovering_base();
	} else if (choice == 2) {
        patrol_unit();
    } else if (choice == 3) {
        drone();
    }
}

void drone()
{
	print("Story. a\n"
          "Story", "Magenta");
    print("You wonder what plan you should go with now.", "Magenta");
    print("Do you....?", "Magenta");

    print("1. Option1", "Blue");
    print("2. Option2", "Blue");
    print("3. Option2", "Blue");

    int choice = int_option(3);

    if (choice == 1) {
        discovering_base();
	} else if (choice == 2) {
        patrol_unit();
    } else if (choice == 3) {
        drone();
    }
}

