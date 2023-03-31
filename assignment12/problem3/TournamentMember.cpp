/*
MB-213-A
a12 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include "TournamentMember.h"
using namespace std; 
// TournamentMember section

// Define the static variable
std::string TournamentMember::location;

// Constructors
TournamentMember::TournamentMember()
{
    cout << "Calling the empty constructor"<< endl;

    // No default values where given so these are up to me to decide
    setFirstName("Ali");
    setLastName("A");
    setDateOfBirth("1234-06-12");
    setGender(Gender::Male);
    setNationality("China");
}

TournamentMember::TournamentMember(
    const char* firstName, const char* lastName, const char* dateOfBirth,
    const Gender gender, const std::string nationality
)
{
    std::cout << "Calling the parameter constructor\n";

    // Pass in the parameter values
    setFirstName(firstName);
    setLastName(lastName);
    setDateOfBirth(dateOfBirth);
    setGender(gender);
    setNationality(nationality);
}

TournamentMember::TournamentMember(const TournamentMember& tm)
{
    std::cout << "Calling the copy constructor\n";

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
    std::cout << "Calling the destructor\n";
    // No memory is allocated, so nothing to do here
}

// Utilities
void TournamentMember::print()
{
    cout << "First name: " << m_firstName << endl;
    cout << "Last name: " << m_lastName << endl;
    cout << "Date of birth: " << m_dateOfBirth << endl;
    cout << "Gender: " << genderAsString() << endl;
    cout << "Nationality: " << m_nationality << endl;
    cout << "Location: " << TournamentMember::location << endl;
}

// Player section
// Constructors
Player::Player() : TournamentMember()
{
    m_number = 0;
    m_position = "Outside of the stadium";
    m_goals = -999;
    m_foot = Foot::Both;
}

Player::Player(
    const char* firstName, const char* lastName, const char* dateOfBirth,
    const Gender gender, const std::string nationality,
    const int number, const std::string position, const unsigned goals,
    const Foot foot
) : TournamentMember(firstName, lastName, dateOfBirth, gender, nationality)
{
    // Copy stuff to the instance
    m_number = number;
    m_position = position;
    m_goals = goals;
    m_foot = foot;
}

Player::Player(const Player& p) : TournamentMember(p)
{
    // Steal the stuff from the passed instance
    m_number = p.m_number;
    m_position = p.m_position;
    m_goals = p.m_goals;
    m_foot = p.m_foot;
}

void Player::print()
{
    cout << "First name: " << m_firstName << endl;
    cout << "Last name: " << m_lastName << endl;
    cout << "Date of birth: " << m_dateOfBirth << endl;
    cout << "Gender: " << genderAsString() << endl;
    cout << "Nationality: " << m_nationality << endl;
    cout << "Number: " << m_number << endl;
    cout << "Position: " << m_position << endl;
    cout << "Goals: " << m_goals << endl;
    cout << "Foot: " << footAsString() << endl;
    cout << "Location: " << TournamentMember::location << endl;
}
