/*
MB-213-A
a12 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"

using namespace std; 
int main()
{
    // Create stuff
    TournamentMember m1;
    TournamentMember m2("Damn", "Daniel", "2001-08-01", Gender::Male, "Russia");
    TournamentMember m3(m2);

    TournamentMember::setLocation("Mars");
    
    m3.setLastName("NOname");
    m3.setLastName(
    "drakeandnothingmorethanthatttttttt"
    );
    m3.setDateOfBirth("2000-11-11");
    m3.setDateOfBirth("1544143415");

    cout << "\n"; m1.print(); cout << "\n";
    cout << "\n"; m2.print(); cout << "\n";
    cout << "\n"; m3.print(); cout << "\n";

    return 0;
}