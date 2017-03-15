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
    StoryItem* madManHandsItem = new StoryItem();

    print("\nYou decided to eliminate the pirates with your bare hands\n", "green");
    madManHandsItem->preText = "\nThe adrenaline made you insane and you went into a killstreak like Rambo. 15 minutes later after you have broken more than 60 necks.";
    madManHandsItem->preTextColour = "magenta";
    madManHandsItem->prompt = "Do you:";
    madManHandsItem->options = {
        "Go to the captain and kill him no questions asked",
        "Go to the captain and find out if he has allies"
    };

    int choice = madManHandsItem->run();

    if (choice == 1) {
        win_game();
    }
    if (choice == 2) {
        print("A pirate who almost died managed to yell before you got in the control unit and the captain had time to welcome you with a mini-gun", "red");
    }
}
void mad_man()
{
    StoryItem* madManItem = new StoryItem();

    print("\nYou got out your knife and rushed on to the deck\n", "green");
    madManItem->preText = "\nThe adrenaline made you insane and you went into a killstreak like Logan. After 15 minutes you killed more than 60 pirates, the majority of them decaputated.";
    madManItem->preTextColour = "magenta";
    madManItem->prompt = "Do you:";
    madManItem->options = {
        "Go the captain and kill him no questions asked",
        "Go to the captain and find out if he has allies"
    };

    int choice = madManItem->run();

    if (choice == 1) {
        win_game();
    }
    if (choice == 2) {
        print("A pirate who almost died managed to yell before you got in the control unit and the captain had time to welcome you with a mini-gun", "red");
    }
}
void adrenaline_shot()
{
    StoryItem* adrenalineShotItem = new StoryItem();

    print("\nYou injected an adrenaline shot in your neck\n", "green");
    adrenalineShotItem->preText = "\nYou waited for the adrenaline to take over your body and become almost invincible";
    adrenalineShotItem->preTextColour = "magenta";
    adrenalineShotItem->prompt = "Do you:";
    adrenalineShotItem->options = {
        "Use a knife",
        "Use your hands"
    };

    int choice = adrenalineShotItem->run();

    if (choice == 1) {
        mad_man();
    }
    if (choice == 2) {
        mad_man_hands();
    }
}
void kill_crew()
{
    StoryItem* killCrewItem = new StoryItem();

    print("\nYou choose to kill the crew first and then the captain\n", "green");
    killCrewItem->preText = "\nYou go to the main deck where all the pirates are";
    killCrewItem->preTextColour = "magenta";
    killCrewItem->prompt = "Do you:";
    killCrewItem->options = {
        "Take adrenaline shot",
        "Deploy grenades",
        "Knife"
    };

    int choice = killCrewItem->run();

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
    StoryItem* intelPlanItem = new StoryItem();

    print("\nYou decided to interogate the last pirate of the group\n", "green");
    intelPlanItem->preText = "\nYou find out that the captain just ordered to kill all your crew members because he found out you were on board. Out of anger you just snaped the pirates neck.You found an adrenaline shot in his pocket and you took it";
    intelPlanItem->preTextColour = "magenta";
    intelPlanItem->prompt = "Do you";
    intelPlanItem->options = {
        "Go to the captain",
        "Kill the whole crew on the ship first and enjoy killing the captain"
    };

    int choice = intelPlanItem->run();

    if (choice == 1) {
        print("You were foolish to give in to your emotions and are welcomed by a flock of bullets in front of the captains door", "red");
    }
    if (choice == 2) {
        kill_crew();
    }
}
void stealth_and_die()
{
    StoryItem* stealthAndDieItem = new StoryItem();

    print("\nYou decided to eliminate the pirates quietly\n", "green");
    stealthAndDieItem->prompt = "\nYour only options are:";
    stealthAndDieItem->options = {
        "Knife",
        "Hands"
    };

    int choice = stealthAndDieItem->run();

    if (choice == 1) {
        print("You were stupid to think you could kill everybody by yourself", "red");
    }
    if (choice == 2) {
        print("You tried to be like Rambo... unsuccessfully", "red");
    }
}
void proceed_kill()
{
    StoryItem* proceedKillItem = new StoryItem();

    print("\nYou killed the last one of the group\n", "green");
    proceedKillItem->preText = "\nAfter you loot the bodies, you found a bigger knife and smoke grenade. Few minutes later you hear another group approaching";
    proceedKillItem->preTextColour = "magenta";
    proceedKillItem->prompt = "Do you:";
    proceedKillItem->options = {
        "Continue stealth approach",
        "Throw smoke and go in guns blazing"
    };

    int choice = proceedKillItem->run();

    if (choice == 1) {
        stealth_and_die();
    }
    if (choice == 2) {
        print("You trip and fall from the smoke and when you try to get up you get a knife in your spine", "red");
    }
}
void double_kill()
{
    StoryItem* doubleKillItem = new StoryItem();

    print("\nYou slit the throat of the closest to you crew member\n", "green");
    doubleKillItem->preText = "\nYou sneak and stealth kill 2 more of the pirates and only the last one from the group is left ";
    doubleKillItem->preTextColour = "magenta";
    doubleKillItem->prompt = "Do you:";
    doubleKillItem->options = {
        "Interogate and kill",
        "Kill"
    };

    int choice = doubleKillItem->run();

    if (choice == 1) {
        intel_plan();
    }
    if (choice == 2) {
        proceed_kill();
    }
}
void stealth_killstreak()
{
    StoryItem* stealthKillstreakItem = new StoryItem();

    print("\nYou chose to continue stealth approach\n", "green");
    stealthKillstreakItem->preText = "\nYou are now behind a group of space pirates, and spot a knife on the floor.";
    stealthKillstreakItem->preTextColour = "magenta";
    stealthKillstreakItem->prompt = "Do you:";
    stealthKillstreakItem->options = {
        "Stab the closest to you in the leg",
        "Slit throat",
        "Stab him in the temple"
    };

    int choice = stealthKillstreakItem->run();

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
    StoryItem* takeHostageItem = new StoryItem();

    print("\nYou grab a pirate in choke hold\n", "green");
    takeHostageItem->preText = "\nYou tell them to lead you to whoever is in charge.They lead you to their captain\n";
    takeHostageItem->preTextColour = "magenta";
    takeHostageItem->prompt = "Do you:";
    takeHostageItem->options = {
        "Ask the captain to free your crew so that you can go on your way",
        "Tell him to release your crew and to get out of the space station"
    };

    int choice = takeHostageItem->run();

    if (choice == 1) {
        print("He says you're not getting out alive and pushes a self-destruct button", "red");
    }
    if (choice == 2) {
        print("He blinks oddly but you don't acknowledge it and moments later you get a bullet in the back of the head", "red");
    }
}

void crew_member_search_with_guns()
{
    StoryItem* crewMemberSearchWithGunsItem = new StoryItem();

    print("\nNow that you have supplies you go search for your crew\n", "green");
    crewMemberSearchWithGunsItem->preText = "\nAs you are lurking around your space station you spot a group of space pirates";
    crewMemberSearchWithGunsItem->preTextColour = "magenta";
    crewMemberSearchWithGunsItem->prompt = "Do you:";
    crewMemberSearchWithGunsItem->options = {
        "Shoot with grenade launcher",
        "Sneak behind them and take a hostage",
        "Continue stealth approach"
    };

    int choice = crewMemberSearchWithGunsItem->run();

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
    StoryItem* badassForAmomentItem = new StoryItem();

    print("\nYou snap the pirates neck and drag the body out of the way\n", "green");
    badassForAmomentItem->preText = "\nWhile dragging the body his com activates. There was no response and after a short while you are surrounded by 20-30 pirates ";
    badassForAmomentItem->preTextColour = "magenta";
    badassForAmomentItem->prompt = "Do you";
    badassForAmomentItem->options = {
        "Attempt mass murder.",
        "Try and be friendly"
    };

    int choice = badassForAmomentItem->run();

    if (choice == 1) {
        print("You have no chance and you are killed in less than a second.", "red");
    }
    if (choice == 2) {
        print("You say HI and are welcomed by a flock of bullets.", "red");
    }
}
void crew_member_search()
{
    StoryItem* crewMemberSearchItem = new StoryItem();

    print("\nYou take a lift to the lower deck and see that there are members of your crew locked into sleeping chambers\n", "green");
    crewMemberSearchItem->preText = "\nThe lift is being called up.";
    crewMemberSearchItem->preTextColour = "magenta";
    crewMemberSearchItem->prompt = "Do you:";
    crewMemberSearchItem->options = {
        "Get in the lift hoping to surprise and kill whoever is trying to get in the lift",
        "Attempt opening the chambers",
        "Surrender"
    };

    int choice = crewMemberSearchItem->run();

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
    StoryItem* goInsideItem = new StoryItem();

    print("\nYou go inside the storage unit.\n", "green");
    goInsideItem->preText = "\nYou see an armour vest and a mini grenade launcher\n";
    goInsideItem->preTextColour = "magenta";

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

    goInsideItem->prompt = "\nDo you:";
    goInsideItem->options = {
        "Look for your crew members",
        "Find the other pirate crew members and eliminate them"
    };

    int choice = goInsideItem->run();

    if (choice == 1) {
        crew_member_search_with_guns();
    }
    if (choice == 2) {
        print("You find a group of pirates and try to kill them with the grenade launcher, but it jams and the grenade explodes in your hands.", "red");
    }
}

void hide_n_follow()
{
    StoryItem* hideNfollowItem = new StoryItem();

    print("\nYou followed the pirate silently, while keeping your distance.\n", "green");
    hideNfollowItem->preText = "\nEventually you got to one of the storage units of your station.\n";
    hideNfollowItem->preTextColour = "magenta";
    hideNfollowItem->prompt = "Do you:";
    hideNfollowItem->options = {
        "Go inside",
        "Keep going to find the other pirate crew members",
        "Look for your crew members"
    };

    int choice = hideNfollowItem->run();

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
    StoryItem* storyLineStealthItem = new StoryItem();

    storyLineStealthItem->preText = "\nYou managed to enter the space station through the garbage disposal unit\n";
    storyLineStealthItem->preTextColour = "green";
    storyLineStealthItem->prompt = "What do you do? ";
    storyLineStealthItem->options = {
        "Hide",
        "Hide and follow ",
        "Attempt stealth kill"
    };

    int choice = storyLineStealthItem->run();

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