/*
MB-213-A
a12 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std; 

int main()
{
    // Create stuff
    Player p1;
    Player p2("nice", "lmao", "2010-05-01", Gender::Male, "USA", 10,
        "Driver", 0, Foot::Right);
    Player p3(p2);

    TournamentMember::setLocation("Mars");

    // Change the values for the 3'rd guy
    p3.setFirstName("No name");
    p3.setLastName("Eminem");
    p3.setDateOfBirth("2000-02-20");
    p3.setFoot(Foot::Left);
    p3.setPosition("FORWARD!!!!");
    p3.incrementGoal();
    p3.incrementGoal();

    // Move all players to Hamburg part
    TournamentMember::setLocation("Hamburg");

    cout << "\n"; p1.print(); cout << "\n";
    cout << "\n"; p2.print(); cout << "\n";
    cout << "\n"; p3.print(); cout << "\n";

    return 0;
}