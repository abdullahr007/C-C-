/*
MB-213-A
a12 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include "TournamentMember.h"
using namespace std; 

// static variable
std::string TournamentMember::location;

// Constructors
TournamentMember::TournamentMember()
{
    cout << "Calling  empty constructor\n";

    // No default values were given so these are up to me to decide
    setFirstName("Ali");
    setLastName("A");
    setDateOfBirth("2002-02-17");
    setGender(Gender::Male);
    setNationality("Wakanda");
}

TournamentMember::TournamentMember(
    const char* firstName, const char* lastName, const char* dateOfBirth,
    const Gender gender, const string nationality
)
{
    cout << "Calling the parameter constructor\n";

    // Pass in the parameter values
    setFirstName(firstName);
    setLastName(lastName);
    setDateOfBirth(dateOfBirth);
    setGender(gender);
    setNationality(nationality);
}

TournamentMember::TournamentMember(const TournamentMember& tm)
{
    cout << "Calling the copy constructor"<< endl;

    // Copy the stuff from the passed instance
    setFirstName(tm.m_firstName);
    setLastName(tm.m_lastName);
    setDateOfBirth(tm.m_dateOfBirth);
    setGender(tm.m_gender);
    setNationality(tm.m_nationality);
}

// Destructor
TournamentMember::~TournamentMember()
{
    cout << "Calling the destructor\n";
    // No memory is allocated, so nothing to do here
}

// Utilities
void TournamentMember::print()
{
    cout << "First name: " << m_firstName <<endl;
    cout << "Last name: " << m_lastName << endl;
    cout << "Date of birth: " << m_dateOfBirth << endl;
    cout << "Gender: " << genderAsString() << endl;
    cout << "Nationality: " << m_nationality << endl;
    cout << "Location: " << TournamentMember::location << endl;
}