#include <iostream>
//#include <stdio.h>
#include <string>
using namespace std;

bool valid_name(string test_name)
{
  return true;
}


string get_name()
{
  string nameIn = "";
  cin >> nameIn;
  if(valid_name(nameIn) == true){
    return nameIn;
  }else{
    return "";
  }
}
