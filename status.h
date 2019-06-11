#ifndef STATUS_H
#define STATUS_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <map>
#include <fstream>
#include <cmath>
#include <time.h>

using namespace std;

class Status{
private:
	string name;
	string type; //passive, on-hit, etc.

	string element;

	string desc;
	string flavor_text;

	int timer;

	uint hot; //health over time
	bool damaging; //damage or healing over time?

public:
	Status(bool dmg = true):damaging(dmg){
		name="";type="None";desc="";element="None";
		flavor_text="Bland Flavor Text";timer=0;hot=0;
	}
	Status(string n, string t, string d, string ft, int ti, uint h, bool dmg = true, string ele = "None"){
		name = n; type = t; desc = d; flavor_text = ft; 
		timer = ti; hot = h; damaging = dmg;
		element = ele;
	}

	

	string getName(){return name; }
	string getType(){return type; }
	string getDesc(){return desc; }
	int timeLeft(){return timer; }
	int getHP(){
		if(damaging){return 0-hot; } 
		else {return hot; }
	}
	
	
	virtual void printInfo(bool des = false){
		cout<<"Status Info\n";
		cout<<"Name: "<< this->name <<"\n";
		cout<<"Type: "<< this->type <<"\n";

		if(this->hot != 0){
			cout<< this->hot;
			if(damaging){cout<<" Damage";}
			else{cout<<" Health";}
			cout<<" per Turn\n";
		}

		if(des){
			cout<< this->desc <<"\n";
		}
		cout<< this->flavor_text <<"\n";

		cout<<"Time left: "<< this->timer <<" Turn";
		if(this->timer != 1){cout<<"s"; }
		cout<<"\n";

		
	}

	virtual void passTurn(){timer--; }

	virtual ~Status(){
		//delete name; delete type;
		//delete desc; delete flavor_text;
		//delete timer; delete hot; delete damaging;
	}

};

#endif