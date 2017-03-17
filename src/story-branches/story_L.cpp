#include "../dbstore.h"
#include "../print.h"
#include "../story_item.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;

Database db_sE = Database();

void discovering_base();
void patrol_unit();
void drone();
void discovering_ship();
void kidnap();
void newstory();
void newstory2();
{
	StoryItem* start_LItem = new StoryItem();
    //Start 1.0
    start_LItemItem->preText = "You see a distant gleam of metal not so far from where you are. a\n";
    start_LItemItem->preText = "As you make your way towards it you realise it is part of a massive group of structures";
    start_LItemItem->preTextColour = "magenta";
    start_LItemItem->preText = "You wonder what plan you should go with now.", "Magenta";
    start_LItemItem->prompt = "Do you:";
    start_LItemItem->options = {
		"1. Sneak towards the buildings",
        "2. Hide where you are and wait for movement from the buildings",
        "3. Make your way back to the ship to gather supplies"
    };
	int choice = start_LItem->run();

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
	StoryItem* discovering_baseItem = new StoryItem();
    //start user exploring the base
    start_discovering_baseItem->preText = "You make your way towards the base while keeping an eye out for any movement. a\n";
    start_discovering_baseItem->preText = "While sneaking into the base you see figures swiftly walking nearby.";
    start_discovering_baseItem->preText = "You are curious about where they are going.", "Magenta";
    start_LItemItem->prompt = "Do you:";
    start_LItemItem->options = {
		"1. Attack the guards",
        "2. Sneak in the other direction",
        "3. Silently follow the guards"
    };
    print("1. Attack the guards", "Blue");
    print("2. Sneak in the other direction", "Blue");
    print("3. Silently follow the guards", "Blue");
	int choice = discovering_baseItem->run();

    if (choice == 1) {
        print("The guards overpower you and wrestle you to the ground. After a short struggle you get knocked out");
        kidnap();
    } else if (choice == 2) {
        print("The guards hear you and chase you down before knocking you out")
        kidnap();
    } else if (choice == 3) {
		print("You are not as silent as you think you are and the guards hear you, they catch you and knock you out")
        kidnap();
    }
}

void patrol_unit()
{
    //start patrol unit finding the user
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
    //start drone attacking ship
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
    //start user gets kidnapped
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
    //start user discovers the giant ship
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

void newstory2()
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