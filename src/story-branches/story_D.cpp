#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;

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
    }
    if (choice == 2) {
    }
    if (choice == 3) {
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