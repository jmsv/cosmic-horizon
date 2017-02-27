#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;

void stealth_killstreak()
{
    print(" ");
}

void take_hostage()
{
    print("\nYou grab a pirate in choke hold\n", "green");
    print("\nYou tell them to lead you to whoever is in charge.They lead you to their captain  ", "magenta");
    print("Do you:");
    print("1) Ask the captain to free your crew so that you can go on your way");
    print("2) Tell him to release your crew and to get out of the station");

    int choice = int_option(2);

    if (choice == 1) {
        print("He says you're not getting out alive and pushes a self destruction button", "red");
    }
    if (choice == 2) {
        print("He blinks oddly but you don't acknowledge it and moments later you get a bullet in the back of the head", "red");
    }
}

void crew_member_search_with_guns()
{
    print("\nNow that you have supplies you go search for your crew\n", "green");
    print("\nAs you are lurking around your space station you spot a group of space pirates", "magenta");
    print("Do you:");
    print("1) Shoot with granade launcher");
    print("2) Sneak behind them and take a hostage");
    print("3) Continue stealth approach");

    int choice = int_option(3);

    if (choice == 1) {
        print("When you shoot you don't take cover and fly back from the impact wave causing you to break your back and die in pain");
    }
    if (choice == 2) {
        take_hostage();
    }
    if (choice == 3) {
        stealth_killstreak();
    }
}
void badass_for_a_moment()
{
    print("\nYou snap the pirates neck and drag the body out of the way\n", "green");
    print("\nWhile dragging the body his com activated. There was no response and after a short while you are surrounded by 20-30 pirates ", "magenta");
    print("Do you");
    print("1) Attempt mass murder.");
    print("2) Try and be friendly");

    int choice = int_option(2);

    if (choice == 1) {
        print("You have no chance and you are killed in less than a second.", "red");
    }
    if (choice == 2) {
        print("You say HI and are welcomed by a flock of bullets.", "red");
    }
}
void crew_member_search()
{
    print("\nYou take a lift to the lower deck and see that there are members of your crew locked into sleeping chambers\n", "green");
    print("\nThe lift is being called up.", "magenta");
    print("Do you:");
    print("1) Get in the lift hoping to surprise and kill whoever is trying to get in the lift");
    print("2) Attempt opening the chambers");
    print("3) Surrender");

    int choice = int_option(3);

    if (choice == 1) {
        badass_for_a_moment();
    }
    if (choice == 2) {
        print("The chamber is locked with a biometric scanner. You give up and get shot down.", "red");
    }
    if (choice == 3) {
        print("No questions asked. You get shot multiple times in the head.", "red");
    }
}
void go_inside()
{
    print("\nYou go inside the storage unit.\n", "green");
    print("\nYou see a armor vest and a mini granade launcher\n", "magenta");
    print("Do you:");
    print("1) Look for your crew members");
    print("2) Find the other pirate crew members and eliminate them");

    int choice = int_option(2);

    if (choice == 1) {
        crew_member_search_with_guns();
    }
    if (choice == 2) {
        print("You find a group of pirates and try to kill them with the granade launcher, but it jams and the granade explodes in your hands.", "red");
    }
}

void hide_n_follow()
{
    print("\nYou followed the pirate silently, while keeping your distance.\n", "green");
    print("\nEventually you got to one of the storage units of your station.\n", "magenta");
    print("Do you:");
    print("1) Go inside");
    print("2) Keep going to find the other pirate crew members");
    print("3) Look for your crew members");

    int choice = int_option(3);

    if (choice == 1) {
        go_inside();
    }
    if (choice == 2) {
        print("You follow the pirate to the food court and for a moment you stare at the other pirates and you get casually shot in the head ", "red");
    }
    if (choice == 3) {
        crew_member_search();
    }
}

void start_story_D()
{
    print("What do you do? ");
    print("1) Hide");
    print("2) Hide and follow ");
    print("3) Attempt stealth kill");
    //print("4) Shoot with lazer gun");

    int choice = int_option(3);

    if (choice == 1) {
        print("\nYou stayed hidden for a day but when you fell asleep a crew member found you and killed in the spot ", "red");
    }
    if (choice == 2) {
        hide_n_follow();
    }
    if (choice == 3) {
        print("\nYou snuck behind the crew member and tried to choke him, but you were too weak from starvation and he got out of your grip.", "red");
        print("He alerted the rest of the pirates and you were gunned down like a dog ", "red");
    }
}