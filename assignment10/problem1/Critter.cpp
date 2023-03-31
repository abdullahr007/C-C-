#include <iostream>
#include "Critter.h"
/*
MB-213-A
a10 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}