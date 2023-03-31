#include <iostream>
#include <string>
#include "Creature.h"
/*
MB-213-A
a11 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
using namespace std;

int main()
{ 
    while (true)
    {
        // Get user input
        string input;
        getline(cin, input);

        if (input == "wizard") // wizard created
        {
            Wizard *w = new Wizard();
            w->hover();
            delete w;
        }
        else if (input == "object1" || input == "bird") // bird created
        {
            Bird *b = new Bird();
            b->fly();
            delete b;
        }
        else if (input == "object2" || input == "dog") // dog created
        {
            Dog *d = new Dog();
            d->bark();
            delete d;
        }
        else if (input == "quit")
        {
            break;
        }
    }

    return 0;
}