#include <iostream>
#include <stdio.h>
#include <sqlite3.h>
#include <string>
using namespace std;


int database_test()
{
  sqlite3 *db;
  char *zErrMsg = 0;
  int rc;

  rc = sqlite3_open("test.db", &db);

  if( rc ){
    fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    return(0);
  }else{
    fprintf(stderr, "Opened database successfully\n");
  }
  sqlite3_close(db);
  
  return 0;
}


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


void print(string text, string textColour="", bool newLine=true)
{
  if(textColour == ""){
    printf("%c[1;0m", 27);
  }else if(textColour == "red"){
    printf("%c[1;31m", 27);
  }else if(textColour == "blue"){
    printf("%c[1;34m", 27);
  }
  
  if(newLine){
    text += "\n";
  }
  printf(text.c_str(), 27);
  
  printf("%c[1;0m", 27);
}


int main()
{
  print("Name: ", "", false);
  string name = "";
  name = get_name();
  std::cout << "Hello, " << name << "!\n";
  
  print("Red test", "red");
  print("Blue test", "blue");
  print("Reset test");
  
  return 0;
}
