/*
MB-213-A
a12 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#ifndef H_TOURNAMENT_MEMBER
#define H_TOURNAMENT_MEMBER

#include <cstring>
#include <string>
#include <iostream>

// Define the constants 
#define NAME_LENGTH 36
#define DATE_LENGTH 12 

enum Gender{ Male, Female };

class TournamentMember
{
protected:
    // The properties required by the problem
    char m_firstName[NAME_LENGTH];
    char m_lastName[NAME_LENGTH];
    char m_dateOfBirth[DATE_LENGTH];
    static std::string location;

    //  custom properties
    Gender m_gender;
    std::string m_nationality;

    // Helper mehtods
    inline std::string genderAsString();
public:

    // Consturcors
    TournamentMember();
    TournamentMember(
        const char* ,const char* ,const char* ,const Gender , const std::string
    );
    TournamentMember(const TournamentMember&);

    // Destrucurtor
    ~TournamentMember();

    // Getters
    inline char* getFirstName() { return m_firstName; }
    inline char* getLastName() { return m_lastName; }
    inline char* getDateOfBirth() { return m_dateOfBirth; }
    inline Gender getGender() { return m_gender; }
    inline std::string getNationality() { return m_nationality; }
    static std::string getLocation() 
    { 
        return location; 
    }

    // Setters
    inline void setFirstName(const char *);
    inline void setLastName(const char *);
    inline void setDateOfBirth(const char *);
    inline void setGender(const Gender g) { m_gender = g; }
    inline void setNationality(const std::string n) { m_nationality = n; }
    static void setLocation(const std::string l)
    { 
        location = l; 
    }

    // Utilities
    void print();
};

// inlines must be defined in the header file
// Setters  require  checking
inline void TournamentMember::setFirstName(const char *c)
{
    // If the array is longer than the NAME_LENGTH 
    if (strlen(c) > NAME_LENGTH - 1)
    {
        std::cout << "Name is too long\n";
        return;
    }

    // Copy the array into the member variable
    strcpy(m_firstName, c);
}

inline void TournamentMember::setLastName(const char *c)
{
    // If the array is longer than the NAME_LENGTH 
    if (strlen(c) > NAME_LENGTH - 1)
    {
        std::cout << "Name is too long\n";
        return;
    }

    // Copy the array into the member variable
    strcpy(m_lastName, c);
}

inline void TournamentMember::setDateOfBirth(const char *c)
{
    // If the array is not at length DATE_LENGTH  
    if (strlen(c) == DATE_LENGTH - 1)
    {
        std::cout << "Date is too long\n";
        return;
    }

    // Check if it has the correct format
    unsigned digits[] = {0, 1, 2, 3, 5, 6, 8, 9};
    unsigned seperators[] = {4, 7};

    for (unsigned i = 0; i < 8; ++i)
    {
        // If it does not have digit 
        if (!isdigit(c[digits[i]]))
        {
            std::cout << "Wrong format\n";
            return;
        }
    }

    for (unsigned i = 0; i < 2; ++i)
    {
        // If it does not have '-' 
        if (c[seperators[i]] != '-')
        {
            std::cout << "Wrong format\n";
            return;
        }
    }

    // Copy the array into the member variable
    strcpy(m_dateOfBirth, c);
}

// Helper methods
inline std::string TournamentMember::genderAsString()
{
    return (m_gender == Gender::Male) ? "Male" : "Female";
}

enum Foot { Left, Right, Both };

class Player : public TournamentMember
{
private:
    // The properties required by the problem
    int m_number;
    std::string m_position;
    unsigned m_goals;
    Foot m_foot;

    // Helper methods
    inline std::string footAsString()
    {
        return (m_foot == Foot::Right) ? 
            "Right" : ((m_foot == Foot::Left) ? "Left" : "Both");
    }

public:
    // Consturcors
    Player();
    Player(
        const char* ,const char* ,const char* ,const Gender , const std::string,
        const int, const std::string, const unsigned, const Foot
    );
    Player(const Player&);

    // Destructor
    ~Player() 
    { 
        // donot allocate and sort any memory
    }

    // Getters
    inline int getNumber() { return m_number; }
    inline std::string getPosition() { return m_position; }
    inline unsigned getGoals() { return m_goals; };
    inline Foot getFoot() { return m_foot; }

    // Setters
    inline void setNumber(int n) { m_number = n; }
    inline void setPosition(std::string p) { m_position = p; }
    inline void setFoot(Foot f) { m_foot = f; }

    // Utilities
    void incrementGoal() { m_goals++; }
    void print();
};

#endif