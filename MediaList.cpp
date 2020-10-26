#include <iostream>
#include <vector>
#include "Parent.h"

using namespace std;

void addMedia(vector<Media*>* paramlist, int mediaType);

int main(){

  int mediaType;
  char input[20];
  bool inUse = 1;
  vector<Media *>* list  = new vector<Media *>();

  while(inUse == 1){

    cout << "What would you like to do? (ADD, SEARCH, DELETE, QUIT)" << endl;
    cin.get(input, 20);
    cin.get();
      
    if (input[0] == 'A' && input[1] == 'D' && input[2] == 'D'){
      cout << "What kind of media would you like to add? (1 = MUSIC, 2 = VIDEOGAME, 3 = MOVIE)" << endl;
      cin >> mediaType;
      cin.get();
      
      addMedia(list, mediaType);
      
    }

    if (input[0] == 'S' &&input[1] == 'E' &&input[2] == 'A' &&input[3] == 'R' &&input[4] == 'C' &&input[5] == 'H'){

    }

    if (input[0] == 'D' &&input[1] == 'E' &&input[2] == 'L' &&input[3] == 'E' &&input[4] == 'T' &&input[5] == 'E'){

    }

    if (input[0] == 'Q' &&input[1] == 'U' &&input[2] == 'I' &&input[3] == 'T'){
      inUse = 0;
    }
    
  }
  


  
  return 0;
}


void addMedia(vector<Media*>* paramlist, int mediaType){
  char titleInput[20];
  int yearInput;
  Media* newMedia = new Media();
  cout << "Enter the title of the media" << endl;
  cin.get(titleInput, 20);
  cin.get();
  newMedia->setTitle(titleInput);
  cout << "Enter the year of the media" << endl;
  cin >> yearInput;
  cin.get();
  newMedia->setYear(yearInput);
  paramlist->push_back(newMedia);
  
}
