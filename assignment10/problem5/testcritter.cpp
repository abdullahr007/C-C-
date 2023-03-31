#include <iostream>
#include <cstdlib>
#include "Crittter.h"
/*
MB-213-A
a10 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std;

int main(int argc, char** argv)
{
    // Create the critters
	Critter c1;
    c1.setHunger(2);

    Critter c2("LOADED FRIES");
    c2.setHunger(2);

    Critter c3("BIRYANI", 2, 1000, 921.312);
    
    Critter c4("CHICKEN KARAHI", 2, 123213, 214.121);

    cout << endl << endl << endl;

    c1.print();
    cout << endl;

    c2.print();
    cout << endl;

    c3.print();
    cout << endl;
    
    c4.print();
    cout << endl;

    return 0;
}