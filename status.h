#ifndef STATUS_H
#define STATUS_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>
#include <time.h>

using namespace std;

class Status{
private:
	string name;
	string type; //passive, on-hit, etc.

	uint hot; //health over time
	bool damaging; //damage or healing over time?

	int timer;
public:
	Status(){name="";type="None";hot=0;damaging=true;timer=0;}



	string getName(){return name; }
	int getHP(){
		if(damaging){return 0-hot; } 
		else {return hot; }
	}
	int timeLeft(){return timer; }

	void passTurn(){timer--; }

};

#endif