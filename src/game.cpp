#include <iostream>
#include <stdio.h>
#include <string>
#include "print.h"
#include "dbstore.h"
#include "userin.h"
using namespace std;

int explore()
{
    print("You get up and see a small town in the distance");
}
int kill_yourself()
{
    print("You put a spike on the ground and climb on top of your ship. You jump and while you are falling you see a small town in the distance, but it's too late and you die.");
}
int stay()
{
    print("You stayed in the wrecked ship for  6 days before you starved to death");
}
int main()
{
  
  database_test();
  
  print("Name: ", "", false);
  string name = "";
  name = get_name();
  std::cout << "Hello, " << name << "!\n";
  
  print("Do you want to play Cosmic Horizon ");
  print("Yes");
  print("No");
    
  bool choice;
  choice = yes_or_no();
  if (choice)
  {
      print("Let's begin");
  }
  else
  {
      print("Answered no");
  }
  
  print("You wake up and find out you are stranded on a foreign planet after you crashed your spaceship. What do you do");
  print("1) Kill yourself");
  print("2) Get up and explore");
  print("3) Stay in the wrecked ship and wait for help");
   
    int answer;
    std::cin >> answer;
    if (answer == 1)
    {
        kill_yourself();
    }
    if (answer == 2)
    {
        explore();
    }
    if (answer == 3)
    {
        stay();
    }
  return 0;
}
