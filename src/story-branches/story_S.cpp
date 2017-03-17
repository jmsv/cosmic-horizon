#include "../dbstore.h"
#include "../print.h"
#include "../story_item.h"
#include "../userin.h"
#include <iostream>
#include <string>
using namespace std;
//your the captin now

Database db_sS = Database();

void now_captin()
{
    StoryItem* nowCaptinItem = new StoryItem();

    nowCaptinItem->preText = ".\n You gather the crew around and you tell them about your home planet"
                             ".\n About how its full of gold and riches beyond their wildest dreams"
                             ".\n All the crew want to go with you however the captin disagrees"
                             ".\n The captin shouts 'I will not have a mutiny aboard my ship, anybody who disagrees will go over board'";

    nowCaptinItem->preTextColour = "magenta";

    nowCaptinItem->prompt = "What do you do?";

    nowCaptinItem->options = {
        "Shoot the capatin", //1
        "Let him live", //2
        "Throw him over board", //3
    };

    int choice = nowCaptinItem->run();

    if (choice == 1) {
        print(".\n You shoot the captain and the crew cheer, you are the captin now", "green");
        print(".\n Set sail for Earth", "green");
    } else if (choice == 2) {
        print(".\n He shoots you to stop the mutiny", "red");
    } else if (choice == 3) {
        print(".\n you throw hom oer board, you are the captin now", "green");
        print(".\n Set sail for Earth", "green");
    }
}
//winning the gun fight
void the_gun()
{
    StoryItem* theGunItem = new StoryItem();

    theGunItem->preText = ".\n You get your self ready and start to say 'I am one witht he force, the force is with me'"
                          ".\n You close your eyes and walk over and by some crazy miracle which would never happen you make it"
                          ".\n You turn and fire it at the wall behind them, blowing a hole in the ship sucking their entire crew into space suffocating them";

    theGunItem->preTextColour = "magenta";

    theGunItem->prompt = "What do you do?";

    theGunItem->options = {
        "Scream that your are the best", //1
        "Be gracious and say it was nothing", //2
    };

    int choice = theGunItem->run();

    if (choice == 1) {
        print(".\n While screaming you are the best you accidentlly say 'You guys all suck I love Trump'", "green");
        print(".\n The crew were all strong Hillary supporters and just gun you down", "red");
    } else if (choice == 2) {
        now_captin();
    }
}
//gun fight
void gun_crate()
{
    StoryItem* gunCrateItem = new StoryItem();

    gunCrateItem->preText = ".\n You spot a massive gun in a crate";

    gunCrateItem->preTextColour = "magenta";

    gunCrateItem->prompt = "What do you do?";

    gunCrateItem->options = {
        "Run though the gun fire and pick it up", //1
        "Stay and try to just use the gun you were given", //2
    };

    int choice = gunCrateItem->run();

    if (choice == 1) {
        the_gun();
    } else if (choice == 2) {
        print("The gun they gave you jams aand blows up in your face killing you", "red");
    }
}
// start of the hunt
void the_hunt()
{
    StoryItem* theHuntItem = new StoryItem();

    theHuntItem->preText = ".\n After chasing for what seems like hours it all comes down to this"
                           ".\n Your captain rams their ship and you all jump aboard and you take cover behind some boxes"
                           ".\n You get ready and pop your head up ready to fire";

    theHuntItem->preTextColour = "magenta";

    theHuntItem->prompt = "What do you do?";

    theHuntItem->options = {
        "Shoot the frst thing you see", //1
        "Duck back down", //2
        "Evauluate the situation", //3
    };

    int choice = theHuntItem->run();

    if (choice == 1) {
        print(".\n The first thing you saw was the captin and you shoot him unforunaly you dont kill him and he turn to face you and blows your head off", "red");
    } else if (choice == 2) {
        print(".\n Your cower behind cover and try just wait the fight out", "green");
        print(".\n They use a giant gun and vaporise you and the entire crew", "green");
    } else if (choice == 3) {
        gun_crate();
    }
}
// start of gun story line
void the_ship_gun()
{
    StoryItem* theShipGunItem = new StoryItem();

    theShipGunItem->preText = ".\n The Captain comes up to you and pats you on the back and says 'welcome aboard, but you still have to proove your self'"
                              ".\n The captain turns to the crew and shouts 'One with the ship, One with the crew!'"
                              ".\n The crew start to chant 'One with the ship, One with the crew!' and you feel a bit out of place but you join in"
                              ".\n After a few days sailing you spot another ship";

    theShipGunItem->preTextColour = "magenta";

    theShipGunItem->prompt = "What do you do?";

    theShipGunItem->options = {
        "Shout for that you have seen it", //1
        "Keep quite and hope they get away", //2
    };

    int choice = theShipGunItem->run();

    if (choice == 1) {
        print(".\n All hands on deck, the hunt is on", "green");
        the_hunt();
    } else if (choice == 2) {
        print("The captain shouts up to you 'Are you blind, your not even wearing an eye patch yet, your useless!'");
        print(".\n He looks up and just shoots you,your body falls limply of the edge and you just left floating as they sail away", "red");
    }
}
//becoming captin
void im_the_captain_now()
{
    StoryItem* imTheCaptinNowItem = new StoryItem();

    imTheCaptinNowItem->preText = ".\n Im the captain now"
                                  ".\n You win";

    imTheCaptinNowItem->preTextColour = "magenta";
};
// sword fight 4
void sword_fight4()
{
    StoryItem* swordFigh4Item = new StoryItem();

    swordFigh4Item->preText = ".\n You take a step back"
                              ".\n Hes still swinging wildly"
                              ".\n What do you do:";

    swordFigh4Item->preTextColour = "magenta";

    swordFigh4Item->prompt = "What do you do?";

    swordFigh4Item->options = {
        "Advance", //1
        "Retreat", //2
    };

    int choice = swordFigh4Item->run();

    if (choice == 1) {
        print("You have waited for just the right moment", "green");
        print(".\n He swings and you trip him and then chop his head off while hes on the floor", "green");
        im_the_captain_now();
    } else if (choice == 2) {
        print(".\n You retreat too much");
        print(".\n He backs you into the corner and chops you into lots of little pieces", "red");
    }
}
// sword fight 3
void sword_fight3()
{
    StoryItem* swordFigh3Item = new StoryItem();

    swordFigh3Item->preText = ".\n You take a step back"
                              ".\n He starts to get annoyed and starts to swing wildly"
                              ".\n What do you do:";

    swordFigh3Item->preTextColour = "magenta";

    swordFigh3Item->prompt = "What do you do?";

    swordFigh3Item->options = {
        "Advance", //1
        "Retreat", //2
    };

    int choice = swordFigh3Item->run();

    if (choice == 1) {
        print("Your too hasty");
        print(".\n While he swings wildly he catches you and you scream in agony and he spears oyou through the heart", "red");
    } else if (choice == 2) {
        sword_fight4();
    }
}
// sword fight 2
void sword_fight2()
{
    StoryItem* swordFigh2Item = new StoryItem();

    swordFigh2Item->preText = ".\n You take a step back"
                              ".\n He swings at you and misses"
                              ".\n What do you do:";

    swordFigh2Item->preTextColour = "magenta";

    swordFigh2Item->prompt = "What do you do?";

    swordFigh2Item->options = {
        "Advance", //1
        "Retreat", //2
    };

    int choice = swordFigh2Item->run();

    if (choice == 1) {
        print("Your too hasty");
        print(".\n He chops of your leg and spins around to behind you and as you fall to one knee he beheads you", "red");
    } else if (choice == 2) {
        sword_fight3();
    }
}
// sword fight 1
void sword_fight()
{
    StoryItem* swordFighItem = new StoryItem();
    swordFighItem->preText = ".\n The bacics advance and attack, and retreat and defend";

    swordFighItem->preTextColour = "magenta";

    swordFighItem->prompt = "What do you do?";

    swordFighItem->options = {
        "Advance", //1
        "Retreat", //2
    };

    int choice = swordFighItem->run();

    if (choice == 1) {
        print("Your too hasty");
        print(".\n He chops of your leg and spins around to behiind you and as you fall to one knee he beheads you", "red");
    } else if (choice == 2) {
        sword_fight2();
    }
}
// start of sword story line
void the_ship_sword()
{
    StoryItem* theShipSwordItem = new StoryItem();

    theShipSwordItem->preText = ".\n The Captain comes up to you and says 'Im the master swords man abord this ship do you think you can beat me?'";

    theShipSwordItem->preTextColour = "magenta";

    theShipSwordItem->prompt = "What do you do?";

    theShipSwordItem->options = {
        "yes", //1
        "no", //2
    };

    int choice = theShipSwordItem->run();

    if (choice == 1) {
        print("Lets fight");
        sword_fight();
    } else if (choice == 2) {
        print("We dont take quiters abord this ship");
        print(".\n In one fluid swoop he swings up and splits you though the middle", "red");
    }
}
// joining the pirates
void join_them()
{
    StoryItem* joinThemItem = new StoryItem();

    joinThemItem->preText = ".\n We are space pirates and we are destined to travel the 7 galaxys"
                            ".\n You will come back with me to our ship the 'Floating Dutchman'";

    joinThemItem->preTextColour = "magenta";

    joinThemItem->prompt = "What do you do?";

    joinThemItem->options = {
        "Light-saber fighting", //1
        "Lazer guns", //2
        "Cleaning the deck" //3
    };

    int choice = joinThemItem->run();

    if (choice == 1) {

        db_sS.add_to_inventory("Light saber");

        if (db_sS.do_i_have("Light saber")) {
            print("You now have a Light saber");
        } else {
            print("You do not have a Light saber");
        }

        print(".\n Good we will have to test you when we get back to the ship", "green");
        the_ship_sword();
    } else if (choice == 2) {

        db_sS.add_to_inventory("Lazer_gun");

        if (db_sS.do_i_have("Lazer_gun")) {
            print("You now have a Lazer_gun");
        } else {
            print("You do not have a Lazer_gun");
        }

        print(".\n Welcome aboard", "green");
        the_ship_gun();
    } else if (choice == 3) {
        print(".\n We have no need for women", "red");
    }
}
//meeting the pirate
void mind_control()
{
    StoryItem* mindControlItem = new StoryItem();

    mindControlItem->preText = ".\n You black out"
                               ".\n When you wake you can suddenly understand him"
                               ".\n He says 'I have looked through your mind, im going to give you an ultimatum'";

    mindControlItem->preTextColour = "magenta";

    mindControlItem->prompt = "What do you do?";

    mindControlItem->options = {
        "Join me in a life of piracy", //1
        "I kill you", //2
    };

    int choice = mindControlItem->run();

    if (choice == 1) {
        join_them();
    } else if (choice == 2) {
        print("BLAST", "red");
    }
}
//aboard the ship
void aboard()
{
    StoryItem* aboardItem = new StoryItem();

    aboardItem->preText = ".\n This figure stands before you vaguely humanoid, he starts making noises getting more more agressive", "green"
                                                                                                                                     ".\n A tentacle shoots outa and ataches it to your head ";

    aboardItem->preTextColour = "magenta";

    aboardItem->prompt = "What do you do?";

    aboardItem->options = {
        "Try to fight", //1
        "Let it happen", //2
        "Use jedi mind powers to keep him out of your brain", //3
    };

    int choice = aboardItem->run();

    if (choice == 1) {
        print(".\n The humanoid figure uses his tentacle and throws you into the air lock and blasts you back int space to suffocate", "red");
    } else if (choice == 2) {
        mind_control();
    } else if (choice == 3) {
        print(".\n Your no jedi", "green");
        mind_control();
    }
}
//pitate story start
void start_story_S()
{
    StoryItem* startStoryItem = new StoryItem();

    startStoryItem->preText = ".\n You try to contact who ever is aboard", "green"
                                                                           ".\n You hear nothing but one of the docking bays open up";

    startStoryItem->preTextColour = "magenta";

    startStoryItem->prompt = "What do you do?";

    startStoryItem->options = {
        "Dock and go aboard", //1
        "Kep trying to contact them", //2
        "Turn and run", //3
    };

    int choice = startStoryItem->run();

    if (choice == 1) {
        aboard();
    } else if (choice == 2) {
        print(".\n You annoy whoever is aboard and they use the space stations lazers to evaporate you from existance", "red");
    } else if (choice == 3) {
        print(".\n You try to run and they use the space stations lazers to evaporate you from existance", "red");
    }
}