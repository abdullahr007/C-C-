
#include <iostream>
#include "Creature.h"
/*
MB-213-A
a11 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
using namespace std;

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    // calling birds methods
    Bird b;
    b.run();
    b.fly();

    // calling dogs all methods
    Dog d;
    d.run();
    d.bark();

    return 0;
}