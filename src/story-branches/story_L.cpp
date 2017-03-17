#include "../dbstore.h"
#include "../print.h"
#include "../story_item.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;

void discovering_base();
void patrol_unit();
void drone();
void discovering_ship();
void kidnap();

void start_L()
{
    //Start 1.0
    print("You see a distant gleam of metal not so far from where you are. a\n"
          "As you make your way towards it you realise it is part of a massive group of structures",
        "Magenta");
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
    //start
    print("You make your way towards the base while keeping an eye out for any movement. a\n"
          "While sneaking into the base you see figures swiftly walking nearby.",
        "Magenta");
    print("You are curious about where they are going.", "Magenta");
    print("Do you....?", "Magenta");

    print("1. Attack the guards", "Blue");
    print("2. Sneak in the other direction", "Blue");
    print("3. Silently follow the guards", "Blue");

    int choice = int_option(3);

    if (choice == 1) {
        print("The guards overpower you and wrestle you to the ground. After a short struggle you get knocked out");
        kidnap();
    } else if (choice == 2) {
        discovering_ship();
    } else if (choice == 3) {
        kidnap();
    }
}

void patrol_unit()
{
    //start
    print("Story. a\n"
          "Story",
        "Magenta");
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
    //start
    print("You are nearing your ship when you see a patrol drone going directly towards your ship. a\n"
          "Story",
        "Magenta");
    print("Story.", "Magenta");
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

void kidnap()
{
    //start
    print("You wake up with a sharp pain in your head. a\n"
          "Story",
        "Magenta");
    print("Story.", "Magenta");
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

void discovering_ship()
{
    //start
    print("Story. a\n"
          "Story",
        "Magenta");
    print("Story.", "Magenta");
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

void newstory()
{
    //start
    print("Story. a\n"
          "Story",
        "Magenta");
    print("Story.", "Magenta");
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