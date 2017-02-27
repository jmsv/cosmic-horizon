#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;
// print(".\n");

void the_hunt()
{
    print("hunt");
}

void the_ship_gun()
{
    print(".\n The Captain comes up to you and pats you on the back and says 'welcome aboard, but you still have to proove your self'", "green");
    print(".\n The captain turns to the crew and shouts 'One with the ship, One with the crew!'", "green");
    print(".\n The crew start to chant 'One with the ship, One with the crew!' and you feel a bit out of place but you join in", "green");
    print(".\n After a few days sailing you spot another ship", "magenta");
    print(".\n Do you do:");

    print("1) shout for that you have seen it");
    print("2) keep quite and hope they get away");

    int choice = int_option(2);

    if (choice == 1) {
        print("All hands on deck, the hunt is on");
        the_hunt();
    }
    if (choice == 2) {
        print("The captain shouts up to you 'Are you blind, your not even wearing an eye patch yet!'");
    }
}
void im_the_captain_now()
{
    print(".\n Im the captain now");
    print(".\n You win");
}

void sword_fight4()
{
    print(".\n You take a step back", "green");
    print(".\n Hes still swinging wildly", "magenta");
    print(".\n what do you do:");

    print(" 1) advance");
    print(" 2) retreat");

    int choice = int_option(2);

    if (choice == 1) {
        print("you have waited for just the right moment");
        print(".\n he swings and you trip him and then chop his head off while hes on the floor");
        im_the_captain_now();
    }
    if (choice == 2) {
        print(".\n You retreat too much");
        print(".\n he backs you into the corner and chops you into lots of little pieces", "red");
    }
}

void sword_fight3()
{
    print(".\n You take a step back", "green");
    print(".\n He starts to get annoyed and starts to swing wildly", "magenta");
    print(".\n what do you do:");

    print(" 1) advance");
    print(" 2) retreat");

    int choice = int_option(2);

    if (choice == 1) {
        print("your too hasty");
        print(".\n while he swings wildly he catches you and you scream in agony and he spears oyou through the heart", "red");
    }
    if (choice == 2) {
        sword_fight4();
    }
}

void sword_fight2()
{
    print(".\n You take a step back", "green");
    print(".\n He swings at you and misses", "magenta");
    print(".\n what do you do:");

    print(" 1) advance");
    print(" 2) retreat");

    int choice = int_option(2);

    if (choice == 1) {
        print("your too hasty");
        print(".\n He chops of your leg and spins around to behind you and as you fall to one knee he beheads you", "red");
    }
    if (choice == 2) {
        sword_fight3();
    }
}

void sword_fight()
{
    print(".\n The bacics advance and attack, and retreat and defend", "green");
    print(".\n do you:");

    print(" 1) advance");
    print(" 2) retreat");

    int choice = int_option(2);

    if (choice == 1) {
        print("your too hasty");
        print(".\n He chops of your leg and spins around to behiind you and as you fall to one knee he beheads you", "red");
    }
    if (choice == 2) {
        sword_fight2();
    }
}

void the_ship_sword()
{
    print(".\n The Captain comes up to you im the master swords man abord this ship do you think you can beat me?", "magenta");
    print(" 1) Yes");
    print(" 2) No");

    int choice = int_option(2);

    if (choice == 1) {
        print("Lets fight");
        sword_fight();
    }
    if (choice == 2) {
        print("We dont take quiters abord this ship");
        print(".\n In one fluid swoop he swings up and splits you though the middle", "red");
    }
}

void join_them()
{
    print(".\n We are space pirates and we are destined to travel the 7 galaxys", "green");
    print(".\n You will come back with me to our ship the 'Floating Dutchman'", "magenta");
    print(".\n What are you best at?");

    print("1) Light-saber fighting");
    print("2) lazer guns");
    print("3) cleaning the deck");

    int choice = int_option(3);

    if (choice == 1) {
        print("Good we will have to test you when we get back to the ship");
        the_ship_sword();
    }
    if (choice == 2) {
        print("Welcome aboard");
        the_ship_gun();
    }
    if (choice == 3) {
        print(".\n We have no need for women", "red");
    }
}

void mind_control()
{
    print(".\n You black out", "green");
    print(".\n When you wake you can suddenly understand him", "green");
    print(".\n He says 'I have looked through your mind, im going to give you an ultimatum'", "magenta");
    print(".\n Do you:");

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
    print(".\n Do you:");

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
        print(".\n Your no jedi", "green");
        mind_control();
    }
}

void start_story_S()
{
    print(".\n You try to contact who ever is aboard", "green");
    print(".\n You hear nothing but one of the docking bays open up", "magenta");
    print(".\n Do you:");

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
//
//
//
//pirate puns needed