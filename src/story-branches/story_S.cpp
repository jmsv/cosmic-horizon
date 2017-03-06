#include "../dbstore.h"
#include "../print.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;

void now_captin()
{
    print(".\n You gather the crew around and you tell them about your home planet", "green");
    print(".\n About how its full of gold and riches beyond their wildest dreams", "green");
    print(".\n All the crew want to go with you however the captin disagrees", "green");
    print(".\n The captin shouts 'I will not have a mutiny aboard my ship, anybody who disagrees will go over board'", "green");
    print(".\n do you");

    print("1) Shoot the capatin");
    print("2) Let him live");
    print("3) Throw him over board");

    int choice = int_option(3);

    if (choice == 1) {
        print(".\n You shoot the captain and the crew cheer, you are the captin now", "green");
        print(".\n Set sail for Earth", "green");
    }
    if (choice == 2) {
        print(".\n He shoots you to stop the mutiny", "red");
    }
    if (choice == 3) {
        print(".\n you throw hom oer board, you are the captin now", "green");
        print(".\n Set sail for Earth", "green");
    }
}

void the_gun()
{
    print(".\n You get your self ready and start to say 'I am one witht he force, the force is with me'", "green");
    print(".\n You close your eyes and walk over and by some crazy miracle which would never happen you make it", "green");
    print(".\n You turn and fire it at the wall behind them, blowing a hole in the ship sucking their entire crew into space suffocating them", "magenta");
    print(".\n Do you?");

    print("1) Scream that your are the best");
    print("2) Be gracious and say it was nothing");

    int choice = int_option(2);

    if (choice == 1) {
        print(".\n While screaming you are the best you accidentlly say 'You guys all suck I love Trump'", "green");
        print(".\n The crew were all strong Hillary supporters and just gun you down", "red");
    }

    if (choice == 2) {
        now_captin();
    }
}

void gun_crate()
{
    print(".\n You spot a massive gun in a crate", "green");
    print(".\n Do you?");

    print("1) Run though the gun fire and pick it up");
    print("2) Stay and try to just use the gun you were given");

    int choice = int_option(2);

    if (choice == 1) {
        the_gun();
    }
    if (choice == 2) {
        print("The gun they gave you jams aand blows up in your face killing you", "red");
    }
}

void the_hunt()
{
    print(".\n After chasing for what seems like hours it all comes down to this", "green");
    print(".\n Your captain rams their ship and you all jump aboard and you take cover behind some boxes", "green");
    print(".\n You get ready and pop your head up ready to fire", "magenta");
    print(".\n Do you?");

    print("1) Shoot the frst thing you see");
    print("2) Duck back down");
    print("3) Evauluate the situation");

    int choice = int_option(3);

    if (choice == 1) {
        print(".\n The first thing you saw was the captin and you shoot him unforunaly you dont kill him and he turn to face you and blows your head off", "red");
    }
    if (choice == 2) {
        print(".\n Your cower behind cover and try just wait the fight out", "green");
        print(".\n They use a giant gun and vaporise you and the entire crew", "green");
    }
    if (choice == 3) {
        gun_crate();
    }
}

void the_ship_gun()
{
    print(".\n The Captain comes up to you and pats you on the back and says 'welcome aboard, but you still have to proove your self'", "green");
    print(".\n The captain turns to the crew and shouts 'One with the ship, One with the crew!'", "green");
    print(".\n The crew start to chant 'One with the ship, One with the crew!' and you feel a bit out of place but you join in", "green");
    print(".\n After a few days sailing you spot another ship", "magenta");
    print(".\n Do you do:");

    print("1) Shout for that you have seen it");
    print("2) Keep quite and hope they get away");

    int choice = int_option(2);

    if (choice == 1) {
        print(".\n All hands on deck, the hunt is on", "green");
        the_hunt();
    }
    if (choice == 2) {
        print("The captain shouts up to you 'Are you blind, your not even wearing an eye patch yet, your useless!'");
        print(".\n He looks up and just shoots you,your body falls limply of the edge and you just left floating as they sail away", "red");
    }
}
void im_the_captain_now()
{
    print(".\n Im the captain now", "green");
    print(".\n You win", "green");
}

void sword_fight4()
{
    print(".\n You take a step back", "green");
    print(".\n Hes still swinging wildly", "magenta");
    print(".\n What do you do:");

    print(" 1) Advance");
    print(" 2) Retreat");

    int choice = int_option(2);

    if (choice == 1) {
        print("You have waited for just the right moment", "green");
        print(".\n He swings and you trip him and then chop his head off while hes on the floor", "green");
        im_the_captain_now();
    }
    if (choice == 2) {
        print(".\n You retreat too much");
        print(".\n He backs you into the corner and chops you into lots of little pieces", "red");
    }
}

void sword_fight3()
{
    print(".\n You take a step back", "green");
    print(".\n He starts to get annoyed and starts to swing wildly", "magenta");
    print(".\n What do you do:");

    print(" 1) Advance");
    print(" 2) Retreat");

    int choice = int_option(2);

    if (choice == 1) {
        print("Your too hasty");
        print(".\n While he swings wildly he catches you and you scream in agony and he spears oyou through the heart", "red");
    }
    if (choice == 2) {
        sword_fight4();
    }
}

void sword_fight2()
{
    print(".\n You take a step back", "green");
    print(".\n He swings at you and misses", "magenta");
    print(".\n What do you do:");

    print(" 1) Advance");
    print(" 2) Retreat");

    int choice = int_option(2);

    if (choice == 1) {
        print("Your too hasty");
        print(".\n He chops of your leg and spins around to behind you and as you fall to one knee he beheads you", "red");
    }
    if (choice == 2) {
        sword_fight3();
    }
}

void sword_fight()
{
    print(".\n The bacics advance and attack, and retreat and defend", "green");
    print(".\n Do you:");

    print(" 1) Advance");
    print(" 2) Retreat");

    int choice = int_option(2);

    if (choice == 1) {
        print("Your too hasty");
        print(".\n He chops of your leg and spins around to behiind you and as you fall to one knee he beheads you", "red");
    }
    if (choice == 2) {
        sword_fight2();
    }
}

void the_ship_sword()
{
    print(".\n The Captain comes up to you and says 'Im the master swords man abord this ship do you think you can beat me?'", "magenta");
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
    print(".\n You will come back with me to our ship the 'Floating Dutchman'", "green");
    print(".\n What are you best at?");

    print("1) Light-saber fighting");
    print("2) Lazer guns");
    print("3) Cleaning the deck");

    int choice = int_option(3);

    if (choice == 1) {
        print(".\n Good we will have to test you when we get back to the ship", "green");
        the_ship_sword();
    }
    if (choice == 2) {
        print(".\n Welcome aboard", "green");
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

    print("1) Join me in a life of piracy");
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