#include "print.h"
#include <boost/lexical_cast.hpp>
#include <iostream>
#include <string>
using namespace std;

int int_to_string(string string_in)
{
    int i = 0;
    try {
        i = boost::lexical_cast<int>(string_in);
    } catch (...) {
        return -1; // Returns -1 if exception raised
    }
    return i;
}

bool valid_name(string test_name)
{
    if (test_name.find(" ") != string::npos) {
        return false;
    }
    return true;
}

bool valid_text(string text, bool name)
{
    if (text.length() < 1) {
        return false;
    }
    if (name) {
        if (!valid_name(text)) {
            return false;
        }
    }
    return true;
}

string get_text(bool name)
{
    string textIn = "";
    bool validIn = false;
    while (!validIn) {
        getline(cin, textIn);
        if (!valid_text(textIn, name)) {
            print("Invalid input - please try again", "red");
        } else {
            validIn = true;
        }
    }
    return textIn;
}

bool yes_or_no()
{
    print("Enter yes or no (y/n): ", "blue", false);
    string answer = "";
    bool valid_in = false;
    while (!valid_in) {
        getline(cin, answer);
        if (answer == "y" || answer == "yes" || answer == "Y" || answer == "Yes") {
            valid_in = true;
            return true;
        } else if (answer == "n" || answer == "no" || answer == "N" || answer == "No") {
            valid_in = true;
            return false;
        } else {
            print("Invalid input! Try again: ", "red", false);
        }
    }
}

int int_option(int max_digit)
{
    string prompt = "Enter a value between 1 and " + to_string(max_digit) + ": ";
    print(prompt, "blue", false);
    
    if (cin.peek() == '\n')
        cin.ignore();
    
    bool valid_in = false;
    string stringIn = "-1";
    int answer;
    while (!valid_in) {
        getline(cin, stringIn);
        if (stringIn.length() == 1) {
            answer = int_to_string(stringIn);
        }
        if (answer > 0 & answer <= max_digit) {
            valid_in = true;
        } else {
            print("Invalid option. Try again...", "red");
            print(prompt, "blue", false);
        }
    }
    return answer;
}
