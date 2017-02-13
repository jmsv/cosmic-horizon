#include <iostream>
#include <string>
#include "print.h"
using namespace std;


bool valid_name(string test_name)
{
  return true;
}


bool yes_no()
{
    cout << "Yes or no?";
    string answer = "";
    bool valid_in = false;
    while(!valid_in)
    {
        cin >> answer;
        if (answer == "y" || answer == "yes" || answer == "Y" || answer == "Yes")
        {
            valid_in = true;
            return true;
        }
        else if(answer == "n" || answer == "no" || answer == "N" || answer == "No")
        {
            valid_in = true;
            return false;
        }
        else
        {
            cout << "Invalid input! Try again";
        }
    }
}


string get_name()
{
  string nameIn = "";
  cin >> nameIn;
  if (valid_name(nameIn) == true)
  {
    return nameIn;
  } else {
    return "";
  }
}
