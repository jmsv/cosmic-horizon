#include <iostream>
#include <stdio.h>
#include <string>
#include "print.h"
#include "dbstore.h"
#include "userin.h"
using namespace std;


int main()
{
  database_test();
  
  print("Name: ", "", false);
  string name = "";
  name = get_name();
  std::cout << "Hello, " << name << "!\n";
  
  print("Red test", "red");
  print("Blue test", "blue");
  print("Reset test");
  
  return 0;
}
