#include <iostream>
#include "Critter.h"
/*
MB-213-A
a10 p2.[c or cpp or h]
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
// additing our own properties
void Critter::setFavouriteFood(std::string& newFavouriteFood){
    favouriteFood = newFavouriteFood;
}
// additing our own properties
void Critter::setCountry(std::string& newcountry){
    country = newcountry;
}
//cout for additions
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
    cout << "I am from " << country << "  and my favourite food is ";
    cout << favouriteFood << endl;}

int Critter::getHunger() {
	return hunger;
}
string Critter::getFavouriteFood() {
    return favouriteFood;
}

string Critter::getCountry() {
    return country;
}

