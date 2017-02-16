#include "dbstore.h"
#include "print.h"
#include "userin.h"
#include <iostream>
#include <string>
using namespace std;

int kill_yourself()
{
    print("You put a spike on the ground and climb on top of your ship. You jump and while you are falling you see a small town in the distance, but it's too late and you die.", "red");
}
int explore_new_planet()
{
    print("You get up and see a small town in the distance.", "green");
    // Story continues...
}
int stay_in_the_ship()
{
    print("You stayed in the wrecked ship for 6 days before you starved to death", "red");
}
int scavenge_for_supplies()
{
    print("You go into the first building and find food. ", "green");
}
int loud_cry_for_help()
{
    print("You yell for help but there is no response. ");
}
int repair_and_take_off()
{
    print("You go back and repair your ship and you're able to go in to orbit, hoping to find your space station", "green");
}
int sleepover_dead()
{
    print("You stay for the night and in the morning you find yourself on the other end of a gun and you get shot in the head by desert pirates", "red");
}
int loud_stay()
{
    print("You yell again but still no response. After a while you hear someone approaching. You go out to see who it is , but you are gunned down by desert pirates", "red");
}
int weapon_lazergun()
{
    print("You find a lazer gun with rechargeable ammo", "green");
}
int enter_three()
{
    print("Enter a number from 1 to 3: ", "blue");
}
int enter_two()
{
    print("Enter a number from 1 to 2: ", "blue");
}
void start_story()
{
    print("You wake up and find out you are stranded on a foreign planet after you crashed your spaceship.");
    print("What do you do?");
    print("1) Kill yourself");
    print("2) Get up and explore");
    print("3) Stay in the wrecked ship and wait for help");
    print("");
    enter_three();

    int answer;
    std::cin >> answer;

    print("");

    if (answer == 1) {
        kill_yourself();
        return void();
    }
    if (answer == 2) {
        explore_new_planet();
    }
    if (answer == 3) {
        stay_in_the_ship();
        return void();
    }
    print("Do you go to the town?");
    print("Yes");
    print("No");
    print("");
    bool choice;
    choice = yes_or_no();

    if (choice) {
        print("You chose to go.");
    } else {
        stay_in_the_ship();
        return void();
    }
    print("You reach the town and see it has been abandoned. What do you do? ");
    print("1) Have a look around quietly ");
    print("2) Go back to your ship ");
    print("3) Shout for help ");
    print("");
    enter_three();
    std::cin >> answer;

    if (answer == 1) {
        scavenge_for_supplies();
        print("In the next building you find repair tools kit. Do you:");
        print("1) Keep looking for suplies");
        print("2) Rush to your ship");
        print("");
        enter_two();
        std::cin >> answer;

        if (answer == 1) {
            weapon_lazergun();
            repair_and_take_off();
        }
        if (answer == 2) {
            repair_and_take_off();
        }
    }
    if (answer == 2) {
        stay_in_the_ship();
        return void();
    }
    if (answer == 3) {
        loud_cry_for_help();
        print("You find some leftover food and repairing tool kit. Do you: ");
        print("1) Go back to your ship immediately");
        print("2) Stay for the night");
        print("3) Call again for help");
        print("");
        enter_three();
        std::cin >> answer;
        if (answer == 1) {
            repair_and_take_off();
        }
        if (answer == 2) {
            sleepover_dead();
            return void();
        }
        if (answer == 3) {
            loud_stay();
            return void();
        }
    }
}
