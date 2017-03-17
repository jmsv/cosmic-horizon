#include "dbstore.h"
#include "print.h"
#include "story-branches/story_B.h"
#include "story-branches/story_D.h"
#include "story-branches/story_E.h"
#include "story-branches/story_L.h"
#include "story-branches/story_S.h"
#include "story_item.h"
#include "userin.h"
#include <iostream>
#include <string>
using namespace std;

Database db_s = Database();

void story_join_pirates()
{
    start_story_S();
}
void story_line_guns_blazeing()
{
    start_story_E();
}

void story_line_stealth()
{
    start_story_D();
}

void find_lasergun()
{
    // Player has found a lazer gun
    print("\nYou find a laser gun with rechargeable ammo\n", "green");

    // Lazer gun is added to the user's inventory via a database method
    db_s.add_to_inventory("Lazer gun");

    // Another method is used to check that there is now a lazer gun in the inventory
    if (db_s.do_i_have("Lazer gun")) {
        print("You now have a Lazer gun");
    } else {
        print("You do not have a Lazer gun");
    }
}

void repair_and_take_off()
{
    StoryItem* repairAndTakeOffItem = new StoryItem();

    print("\nYou go back and repair your ship and you're able to go in to orbit, hoping to find your space station.\n ", "green");

    repairAndTakeOffItem->preText = "As you're exiting the atmosphere of the Gem-435-ini, in the distance you see your space station,\nbut there is already a ship docked. As you examine the ship thoroughly you come to the conclusion that\nthis ship is not anyone from Earth, so...";

    repairAndTakeOffItem->preTextColour = "magenta";

    repairAndTakeOffItem->prompt = "Do you:";

    repairAndTakeOffItem->options = {
        "Attempt to dock elsewhere",
        "Leave your ship without docking and use you space suit to board silently",
        "Attempt to contact who ever is aboard"
    };

    int choice = repairAndTakeOffItem->run();

    if (choice == 1) {
        story_line_guns_blazeing();
    } else if (choice == 2) {
        story_line_stealth();
    } else if (choice == 3) {
        story_join_pirates();
    }
}

void scavenge_for_supplies()
{
    StoryItem* scavengeForSuppliesItem = new StoryItem();

    print("You go into the first building and find carefully stashed protein rich molecular bars.", "green");

    scavengeForSuppliesItem->preText = "After looking through other buildings trying to find something to survive you see something hidden behind\nan empty rocket fuel barrel. You move the barrel and see it's a space diagnostics examinator and a fully\nautomatic repair robot kit.\n";

    scavengeForSuppliesItem->preTextColour = "magenta";

    scavengeForSuppliesItem->prompt = "Do you:";

    scavengeForSuppliesItem->options = {
        "Keep looking for supplies",
        "Rush to your ship"
    };

    int choice = scavengeForSuppliesItem->run();

    if (choice == 1) {
        find_lasergun();
        repair_and_take_off();
    }
    if (choice == 2) {
        repair_and_take_off();
    }
}

void shout_for_help()
{
    StoryItem* shoutForHelpItem = new StoryItem();

    shoutForHelpItem->preText = "You yell for help, but there is no response.";

    shoutForHelpItem->preTextColour = "green";

    shoutForHelpItem->prompt = "Do you:";

    shoutForHelpItem->options = {
        "Go back to your ship immediately",
        "Stay for the night",
        "Call again for help"
    };

    int answer = shoutForHelpItem->run();

    if (answer == 1) {
        repair_and_take_off();
    }
    if (answer == 2) {
        print("\nYou stay for the night and in the morning you find yourself on the other end of a gun and you get shot in the head by desert pirates", "red");
    }
    if (answer == 3) {
        print("\nYou yell again but still no response. After a while you hear someone approaching. You go out to see who it is , but you are gunned down by desert pirates", "red");
    }
}

void go_to_the_town()
{
    StoryItem* goToTheTownItem = new StoryItem();

    goToTheTownItem->preText = "You reach the town and see it has been abandoned.\nIt has a scary vibe and looked like it had been under attack at some point.";

    goToTheTownItem->preTextColour = "green";

    goToTheTownItem->prompt = "What do you do?";

    goToTheTownItem->options = {
        "Have a look around quietly ",
        "Go back to your ship ",
        "Shout for help"
    };

    int choice = goToTheTownItem->run();

    if (choice == 1) {
        scavenge_for_supplies();
    } else if (choice == 2) {
        print("\nYou stayed in the wrecked ship for 6 days before you starved to death", "red");
    } else if (choice == 3) {
        shout_for_help();
    }
}

void explore_new_planet()
{
    StoryItem* exploreNewPlanetItem = new StoryItem();

    exploreNewPlanetItem->preText = "You get up and climb the capsule, so that you can examine the terrain around you.\nAfter staring in the distance for a while you spot a small town.";

    exploreNewPlanetItem->preTextColour = "green";

    exploreNewPlanetItem->prompt = "Do you go to the town?:";

    exploreNewPlanetItem->options = {
        "Yes",
        "No"
    };

    int choice = exploreNewPlanetItem->run();

    if (choice == 1) {
        go_to_the_town();
    } else if (choice == 2) {
        print("\nYou stayed in the wrecked ship for 6 days before you starved to death", "red");
    }
}

void start_story()
{
    StoryItem* startItem = new StoryItem();

    startItem->preText = "You wake up in an emergency space ejection capsule with a severe headache and empty stomach.\n"
                         "The last thing you remember was prepairing your space station to maintain orbit around a hostile\n"
                         "planet called Gem-435-ini. You don't remember how you ended up here, so you try to contact your\n"
                         "space station but the coms in the capsule are broken. Left with no food and way to establish contact,\n"
                         "with your crew members, you try to gather your thoughts and figure out how to get back up there.";

    startItem->preTextColour = "magenta";

    startItem->prompt = "What do you do?";

    startItem->options = {
        "Kill yourself", // 1
        "Get up and explore", // 2
        "Stay in the wrecked ship and wait for help" // 3
    };

    int choice = startItem->run();

    if (choice == 1) {
        print("\nYou put a spike on the ground and climb on top of your ship. You jump and while you are falling you see a small town in the distance, but it's too late and you die.", "red");
    } else if (choice == 2) {
        explore_new_planet();
    } else if (choice == 3) {
        print("\nYou stayed in the wrecked ship for 6 days before you starved to death", "red");
    }
}
