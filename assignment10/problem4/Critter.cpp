/*
MB-213-A
a10 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

// Constructors
// default critter without properties
Critter::Critter() 
{
    cout << "\nDefault constructor\n";

    name = "default_critter";
    height = 5;
    hunger = 0;
    boredom = 0;
}
//  critter by supplying names
Critter::Critter(string name) 
{
    cout << "\nConstructor with name argument\n";

    this->name = name;
    height = 5;
    hunger = 0;
    boredom = 0;
}

Critter::Critter(std::string name, int hunger, int boredom, double height = 10) 
{
    cout << "\nMain  constructor\n";

    this->name = name;
    this->hunger = hunger;
    this->boredom = boredom;
    this->height = height;
}

void Critter::setName(string& newname) 
{
	name = newname;
}

void Critter::setHunger(int newhunger) 
{
	hunger = newhunger;
}

void Critter::print() 
{
   
	cout << "MY NAME IS " << name << ". My hunger level : " << hunger << "." << endl;
    cout << "My height : " << height << ". My boredom level : " << boredom << endl;
}

int Critter::getHunger()
 {
	return hunger;
}

