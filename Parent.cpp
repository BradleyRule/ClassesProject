#include <iostream>
#include <cstring>
#include "Parent.h"

using namespace std;

void Media::setTitle(char* newtitle){
  title = newtitle;
}

char* Media::getTitle(){
  return title;
}

void Media::setYear(int newYear){
  year = newYear; 
}

int Media::getYear(){
  return year;
}
