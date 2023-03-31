#include "Creature.h"
#include <iostream>
/*
MB-213-A
a11 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std;

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  
Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
Bird::Bird() : flyDistance(1000)
{
    cout << "\nCreating a bird. "<<endl;
}
void Bird::fly() const
{
    cout << "flying " << flyDistance << " meters"<<endl;
}
Dog::Dog() : barkCount(69696)
{
    cout << "\nCreating a dog."<< endl;
}
void Dog::bark()
{
    cout << "Dog barked " << barkCount << " times\n";
}