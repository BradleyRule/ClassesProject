#include <iostream>
#include <cstring>

using namespace std;

class Media{
 public:
  void setTitle(char*);
  char* getTitle();
  void setYear(int);
  int getYear();

 private:
   char* title;  
   int year;
};
