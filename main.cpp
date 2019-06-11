#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <map>
#include <fstream>
#include <cmath>
#include <time.h>
#include <assert.h>
#include <signal.h>

#include "battle.h"
#include "partymember.h"
#include "monster.h"
#include "status.h"
#include "ability.h"
#include "equipment.h"
#include "item.h"
#include "background.h"

using namespace std;

void newline(){cout<<"\n"; }

int main(int argc, char const *argv[]){
	if(argc == 1){
		cout<<"Compile: g++ -g -Wall -std=c++11 -D <tested component> *.cpp\n";
		cout<<"List to test:\n";
		cout<<"COMPONENTS\n";
		cout<<"PARTY\n";
		cout<<"MONSTER\n";
		cout<<"BATTLE\n";
		cout<<"FINAL_TEST\n";
	}

	#ifdef COMPONENTS
		//statuses, abilities, items, equipment
		cout<<"Statuses, Abilities, Items, Equipment\n";

		cout<<"========= Statuses =========\n";
		cout<<"Testing empty status:\n";
		Status empty_status = Status();
		empty_status.printInfo();

		newline();

		cout<<"Testing new status:\n";
		Status poison = Status("Poison", "Per-Turn", "", "Poison courses through your veins", 5, 10);
		poison.printInfo();

		newline();
		
		cout<<"Testing status pointers:\n";
		Status* regen = new Status("Regen", "Per-Turn", "", "You are getting healthier", 5, 15, false);
		Status* toxic = new Status("Toxic", "Per-Turn", "", "Strong poison courses through your veins", 7, 25);
		Status* burn  = new Status("Burn",  "Per-Turn", "", "It stings to the touch", 2, 7); 
		
		vector<Status*> statuses;
		statuses.push_back(regen); statuses.push_back(toxic); statuses.push_back(burn);
		for(vector<Status*>::iterator itr = statuses.begin(); itr != statuses.end(); itr++){
			(*itr)->printInfo();
			newline(); 
			delete *itr;
			statuses.erase(itr);
			itr--;
		}
		//(*statuses[0]).printInfo();
		cout<<"After deleting statuses, length: "<< statuses.size() <<"\n";
		
		newline();

		cout<<"========= Abilities ========\n";
		Ability empty_ability = Ability();
		empty_ability.printInfo();

		cout<<"========= Items ============\n";
		Item empty_item = Item();
		empty_item.printInfo();

		cout<<"========= Equipment ========\n";
		Equipment empty_equipment = Equipment();
		empty_equipment.printInfo();
	#endif



	#ifdef PARTY
		//creation of party members
		cout<<"========= PartyMembers =====\n";
	#endif



	#ifdef MONSTER
		//creation of monsters
		cout<<"========= Monsters =========\n";
	#endif



	#ifdef BATTLE
		//creation of battle class with weather, terrain
		cout<<"Battling Set Up\n";
	#endif


	#ifdef FINAL_TEST
		cout<<"We will now begin the battle simulation.\n";
	#endif

	

	return 0;
}