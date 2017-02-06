#include <stdio.h>
#include <string>
#include "print.h"
using namespace std;


void print(string text, string textColour, bool newLine)
{
  // ANSI colour codes:
  // http://pueblo.sourceforge.net/doc/manual/ansi_color_codes.html
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