/*
MB-213-A
a12 p2.[c or cpp or h]
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
private:
    // The properties required by the problem
    char m_firstName[NAME_LENGTH];
    char m_lastName[NAME_LENGTH];
    char m_dateOfBirth[DATE_LENGTH];
    static std::string location;

    // My custom properties
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

// Setters which require some checking
inline void TournamentMember::setFirstName(const char *c)
{
    // If the array is longer than the NAME_LENGTH 
    if (strlen(c) > NAME_LENGTH - 1)
    {
        std::cout << "Name is too long\n";
    }
    else
        // Copy the array into the member variable
        strcpy(m_firstName, c);
}

inline void TournamentMember::setLastName(const char *c)
{
    // If the array is longer than the NAME_LENGTH 
    if (strlen(c) > NAME_LENGTH - 1)
    {
        std::cout << "Name is too long\n";
    }
    else
        // Copy the array into the member variable
        strcpy(m_lastName, c);
}

inline void TournamentMember::setDateOfBirth(const char *c)
{
    // If the array is not at length DATE_LENGTH 
    if (strlen(c) == DATE_LENGTH - 1)
    {
        std::cout << "Date is too long\n";
    }
    else
    {
        bool canSet = true;

        // Checking correct format
        unsigned digits[] = {0, 1, 2, 3, 5, 6, 8, 9};
        unsigned seperators[] = {4, 7};

        for (unsigned i = 0; i < 8; ++i)
        {
            // If it does not have digit 
            if (!isdigit(c[digits[i]]))
            {
                std::cout << "Wrong format\n";
                canSet = false;
                break;
            }
        }

        for (unsigned i = 0; i < 2; ++i)
        {
            // If it does not have '-' 
            if (c[seperators[i]] != '-')
            {
                std::cout << "Wrong format\n";
                canSet = false;
                break;
            }
        }

        if (canSet)
            // Copy the array into the member variable
            strcpy(m_dateOfBirth, c);
    }
    
    
}

// Helper methods
inline std::string TournamentMember::genderAsString()
{
    return (m_gender == Gender::Male) ? "Male" : "Female";
}

#endif