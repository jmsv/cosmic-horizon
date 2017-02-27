#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;
void join_them()
{
    print("welcome");
}

void mind_control()
{
    print(".\n You black out", "green");
    print(".\n When you wake you can suddenly understand them", "green");
    print(".\n He says 'I have looked through your mind, im going to give you an ultimatum'", "magenta");
    print(".\n Do you");

    print("1) Join me and my crew in a life of piracy");
    print("2) I kill you");

    int choice = int_option(2);

    if (choice == 1) {
        join_them();
    }
    if (choice == 2) {
        print("BLAST", "red");
    }
}
void aboard()
{
    print(".\n This figure stands before you vaguely humanoid, he starts making noises getting more more agressive", "green");
    print(".\n A tentacle shoots outa and ataches it to your head ", "magenta");
    print(".\n Do you");

    print("1) Try to fight");
    print("2) Let it happen");
    print("3) Use jedi mind powers to keep him out of your brain");

    int choice = int_option(3);

    if (choice == 1) {
        print(".\n The humanoid figure uses his tentacle and throws you into the air lock and blasts you back int space to suffocate", "red");
    }
    if (choice == 2) {
        mind_control();
    }
    if (choice == 3) {
        print(".\n Your no jedi and takes control", "green");
        mind_control();
    }
}

void start_story_S()
{
    print(".\n You try to contact who ever is aboard", "green");
    print(".\n You hear nothing but one of the docking bays open up", "magenta");
    print(".\n Do you");

    print("1) Dock and go aboard");
    print("2) Kep trying to contact them");
    print("3) Turn and run");

    int choice = int_option(3);

    if (choice == 1) {
        aboard();
    }
    if (choice == 2) {
        print(".\n You annoy whoever is aboard and they use the space stations lazers to evaporate you from existance", "red");
    }
    if (choice == 3) {
        print(".\n You try to run and they use the space stations lazers to evaporate you from existance", "red");
    }
}

//green: good stuff
//red: bad stuff
//cyan: titles
//magenta: neutral story text
//blue: ask for user input