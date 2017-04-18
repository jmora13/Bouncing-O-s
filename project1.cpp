//Jose Mora
//CS 256
//Porject 1
#include <iostream>
#include <time.h>        
using namespace std;


void pause( int milliseconds ) {
  int limit = clock() + milliseconds * CLOCKS_PER_SEC / 1000;
  while ( clock() < limit ) {
    // Do nothing...just wait
  }
}
int main() {
    char ESC = 27;
    int y = 30;
    int initialValue = 1;
	
	for (int x = 0; x <= 80 && y <=37; x += initialValue) {// begin for loop
	if(x == 80){
	initialValue  = -1;
	} else if(x == 1) {
	y++;
	initialValue = 1;
	}// end for loop
	cout << ESC << "[13;0f";
	cout << ESC << "[13;37m";
        cout <<"oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
	cout << ESC << "[13;" << x << "f"; 
    	cout << "\e[0;" << y << "m"; //print out color depending on ansi esc value
	cout << "O";
    	pause(50);//pause so eye can see o
        cout << ESC << "[13;0f";
	cout << ESC  << flush;

	}
    } 

	
    //cout << "Waiting 2 sec..." << flush; // Need flush to see this before pause
   // cout << "Done" << endl << endl;


