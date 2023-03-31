#include <iostream>
#include "Crittter.h"
/*
MB-213-A
a10 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std;

// Constructors
// default critter without properties
Critter::Critter() 
{
    cout << "\nDefault constructor\n";

    name = "default_critter";
    height = 5;
    hunger = hungerIntToDouble(0);
    boredom = 0;
}
//  critter by supplying names
Critter::Critter(string name) 
{
    cout << "\nConstructor with name argument\n";

    this->name = name;
    height = 5;
    hunger = hungerIntToDouble(0);
    boredom = 0;
}

Critter::Critter(std::string name, int hunger, int boredom, double height = 10) 
{
    cout << "\nMain  constructor\n";

    this->name = name;
    this->hunger = hungerIntToDouble(hunger);
    this->boredom = boredom;
    this->height = height;
}

Critter::Critter(
    std::string name, int hunger, int boredom, double height, double thirst) 
{
    cout << "\nMain  constructor\n";

    this->name = name;
    this->hunger = hungerIntToDouble(hunger);
    this->thirst = thirst;
    this->boredom = boredom;
    this->height = height;
}
//int to double
//coverting function
double Critter::hungerIntToDouble(int hunger) {
    return (double)hunger / 10.0;
}
// double to int
int Critter::hungerDoubleToInt(double hunger) {
    return (int) (hunger * 10);
}


void Critter::setName(string& newname) 
{
	name = newname;
}

void Critter::setHunger(int newhunger) 
{ //hunger to double
	hunger = hungerIntToDouble(newhunger);
}

void Critter::setThirst(double newthirst){
    thirst = newthirst;
}

void Critter::print() 
{ 
    //hunger as int
    int hunger = hungerDoubleToInt(this->hunger);
	cout << "MY NAME IS " << name << ". My hunger level : " << hunger << "." << endl;
    cout << "My height : " << height << ". My boredom level : " << boredom << endl;
    cout << "This is my thirst level :  " << thirst << endl;
}

int Critter::getHunger()
 {
    return hungerDoubleToInt(hunger);   
}

double Critter::getThirst() 
{
    return thirst;
}
