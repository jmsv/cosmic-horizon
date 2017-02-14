#include "dbstore.h"
#include "print.h"
#include "userin.h"
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

void start_story()
{
    print("You wake up and find out you are stranded on a foreign planet after you crashed your spaceship.");
    print("What do you do?");
    print("1) Kill yourself");
    print("2) Get up and explore");
    print("3) Stay in the wrecked ship and wait for help");
    print("");

    int answer = int_option(3);
    print("");

    if (answer == 1) {
        kill_yourself();
    }
    if (answer == 2) {
        explore_new_planet();
    }
    if (answer == 3) {
        stay_in_the_ship();
    }
}
