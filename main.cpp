#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>
#include <time.h>
#include <assert.h>

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
		cout<<"Or, if all components have been tested:\n";
		cout<<"g++ -g -Wall -std=c++11 *.cpp\n";
		cout<<"./a.out t\n";
	}

	#ifdef COMPONENTS
		//statuses, abilities, items, equipment
		cout<<"Abilities, Statuses, Items, Equipment\n";

		cout<<"Statuses\n";
		Status empty_status = Status();
		empty_status.printInfo();

		cout<<"Abilities\n";
		Ability empty_ability = Ability();
		empty_ability.printInfo();

		cout<<"Items\n";
		Item empty_item = Item();
		empty_item.printInfo();

		cout<<"Equipment\n";
		Equipment empty_equipment = Equipment();
		empty_equipment.printInfo();
	#endif



	#ifdef PARTY
		//creation of party members
		cout<<"PartyMembers\n";
	#endif



	#ifdef MONSTER
		//creation of monsters
		cout<<"Monsters\n";
	#endif



	#ifdef BATTLE
		//creation of battle class with weather, terrain
		cout<<"Battling Set Up\n";
	#endif


	string t; 
	if(argc > 1){t = argv[1]; }
	if(t == "t"){
		cout<<"We will now begin the battle simulation.\n";


	}

	return 0;
}