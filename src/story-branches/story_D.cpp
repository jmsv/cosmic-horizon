#include "../dbstore.h"
#include "../print.h"
#include "../story_item.h"
#include "../userin.h"
#include <iostream>
#include <string>

using namespace std;

Database db_sD = Database();

void win_game()
{
    print("\nYou enter the control unit of the station filled with vengence and concentration. The captain looks at you\n"
          "and smiles. You grab him by the neck and and stab him in the hearth while looking directly in his eyes\n",
        "green");
    print("\nAfter all this mess you take control over your station again and contact your home planet Earth.\n"
          "You set the coordinates and travell back to Earth with the speed of light.\n",
        "magenta");
    print("\n THE END \n", "cyan");
}
void mad_man_hands()
{
    print("\nYou decided to eliminate the pirates with your bare hands\n", "green");
    print("\nThe adrenaline made you insane and you went into a killstreak like Rambo. 15 minutes later after you have broken more than 60 necks. Do : ", "magenta");
    print("1) You go to the captain and kill him no questions asked");
    print("2) You go to the captain and find out if he has allies");

    int choice = int_option(2);

    if (choice == 1) {
        win_game();
    }
    if (choice == 2) {
        print("A pirate who almost died managed to yell before you got in the control unit and the captain had time to welcome you with a mini-gun", "red");
    }
}
void mad_man()
{
    print("\nYou got out your knife and rushed on to the deck\n", "green");
    print("\nThe adrenaline made you insane and you went into a killstreak like Logan. After 15 minutes you killed more than 60 pirates, the majority of them decaputated. Do : ", "magenta");
    print("1) You go the captain and kill him no questions asked");
    print("2) You go to the captain and find out if he has allies");

    int choice = int_option(2);

    if (choice == 1) {
        win_game();
    }
    if (choice == 2) {
        print("A pirate who almost died managed to yell before you got in the control unit and the captain had time to welcome you with a mini-gun", "red");
    }
}
void adrenaline_shot()
{
    print("\nYou injected an adrenaline shot in your neck\n", "green");
    print("\nYou waited for the adrenaline to take over your body and become almost invincible", "magenta");
    print("Do you:");
    print("1) Use a knife");
    print("2) Use your hands");

    int choice = int_option(2);

    if (choice == 1) {
        mad_man();
    }
    if (choice == 2) {
        mad_man_hands();
    }
}
void kill_crew()
{
    print("\nYou choose to kill the crew first and then the captain\n", "green");
    print("\nYou go to the main deck where all the pirates are", "magenta");
    print("Do you:");
    print("1) Take adrenaline shot");
    print("2) Deploy grenades");
    print("3) Knife");

    int choice = int_option(3);

    if (choice == 1) {
        adrenaline_shot();
    }
    if (choice == 2) {
        print("You deployed bombs and killed a bunch of the pirates but you got shrapnel in your stomach and bled to death", "red");
    }
    if (choice == 3) {
        print("You thouth you were good enough to use a knife to kill everybody... big mistake", "red");
    }
}
void intel_plan()
{
    print("\nYou decided to interogate the last pirate of the group\n", "green");
    print("\nYou find out that the captain just ordered to kill all your crew members because he found out you were on board. Out of anger you just snaped the pirates neck.You found an adrenaline shot in his pocket and you took it", "magenta");
    print("Do you");
    print("1) Go to the captain");
    print("2) Kill the whole crew on the ship first and enjoy killing the captain");

    int choice = int_option(2);

    if (choice == 1) {
        print("You were foolish to give in to your emotions and are welcomed by a flock of bullets in front of the captains door", "red");
    }
    if (choice == 2) {
        kill_crew();
    }
}
void stealth_and_die()
{
    print("\nYou decided to eliminate the pirates quietly\n", "green");
    print("\nYour only options are:", "magenta");
    print("1) Knife");
    print("2) Hands");

    int choice = int_option(2);

    if (choice == 1) {
        print("You were stupid to think you could kill everybody by yourself", "red");
    }
    if (choice == 2) {
        print("You tried to be like Rambo... unsuccessfully", "red");
    }
}
void proceed_kill()
{
    print("\nYou killed the last one of the group\n", "green");
    print("\nAfter you loot the bodies, you found a bigger knife and smoke grenade. Few minutes later you hear another group approaching", "magenta");
    print("Do you:");
    print("1) Continue stealth approach");
    print("2) Throw smoke and go in guns blazing");

    int choice = int_option(2);

    if (choice == 1) {
        stealth_and_die();
    }
    if (choice == 2) {
        print("You trip and fall from the smoke and when you try to get up you get a knife in your spine", "red");
    }
}
void double_kill()
{
    print("\nYou slit the throat of the closest to you crew member\n", "green");
    print("\nYou sneak and stealth kill 2 more of the pirates and only the last one from the group is left ", "magenta");
    print("Do you:");
    print("1) Interogate and kill");
    print("2) Kill");

    int choice = int_option(2);

    if (choice == 1) {
        intel_plan();
    }
    if (choice == 2) {
        proceed_kill();
    }
}
void stealth_killstreak()
{
    print("\nYou chose to continue stealth approach\n", "green");
    print("\nYou are now behind a group of space pirates, and spot a knife on the floor.", "magenta");
    print("Do you:");
    print("1) Stab the closest to you in the leg");
    print("2) Slit throat");
    print("3) Stab him in the temple");

    int choice = int_option(3);

    if (choice == 1) {
        print("When you stab him in the leg, he screams, the other crew members turn around and shoot you", "red");
    }
    if (choice == 2) {
        double_kill();
    }
    if (choice == 3) {
        print("When you stab him in the temple your knife gets stuck, the other crew members turn around and shoot you", "red");
    }
}

void take_hostage()
{
    print("\nYou grab a pirate in choke hold\n", "green");
    print("\nYou tell them to lead you to whoever is in charge.They lead you to their captain  ", "magenta");
    print("Do you:");
    print("1) Ask the captain to free your crew so that you can go on your way");
    print("2) Tell him to release your crew and to get out of the space station");

    int choice = int_option(2);

    if (choice == 1) {
        print("He says you're not getting out alive and pushes a self-destruct button", "red");
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
    print("1) Shoot with grenade launcher");
    print("2) Sneak behind them and take a hostage");
    print("3) Continue stealth approach");

    int choice = int_option(3);

    if (choice == 1) {
        print("When you shoot you don't take cover and fly back from the impact wave causing you to break your spine and die in pain");
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
    print("\nWhile dragging the body his com activates. There was no response and after a short while you are surrounded by 20-30 pirates ", "magenta");
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
    print("\nYou see an armour vest and a mini grenade launcher\n", "magenta");
    db_sD.add_to_inventory("Armour vest");

    if (db_sD.do_i_have("Armour vest")) {
        print("You now have an Armour vest");
    } else {
        print("You do not have an Armour vest");
    }

    db_sD.add_to_inventory("Grenade launcher");

    if (db_sD.do_i_have("Grenade launcher")) {
        print("You now have an Grenade launcher");
    } else {
        print("You do not have an Grenade launcher");
    }
    print("\nDo you:");
    print("1) Look for your crew members");
    print("2) Find the other pirate crew members and eliminate them");

    int choice = int_option(2);

    if (choice == 1) {
        crew_member_search_with_guns();
    }
    if (choice == 2) {
        print("You find a group of pirates and try to kill them with the grenade launcher, but it jams and the grenade explodes in your hands.", "red");
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