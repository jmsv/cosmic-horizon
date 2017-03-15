#include <string>
#include <vector>
using namespace std;

class StoryItem{
    public:
        string preText = "";
        string preTextColour = "";
        string prompt = "";
        vector<string> options;
        int run();
};
