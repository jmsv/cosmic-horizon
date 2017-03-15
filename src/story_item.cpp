#include "story_item.h"
#include "print.h"
#include "userin.h"
using namespace std;

string preText = "";
string preTextColour = "";
string prompt = "";
vector<string> options;

int StoryItem::run()
{
    if (this->preText.length() > 0) {
        print(this->preText, this->preTextColour);
    }

    if (this->prompt.length() > 0) {
        print(this->prompt, "blue");
    }

    int count = 1;
    for (auto i = this->options.begin(); i != this->options.end(); ++i) {
        print(to_string(count) + ") " + *i);
        count += 1;
    }

    return int_option(this->options.size());
}
