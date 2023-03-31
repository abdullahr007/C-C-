#ifndef H_CITY
#define H_CITY
/*
MB-213-A
a10 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <string>

class City
{
private:
    // Member variables
    std::string name;
    int population;
    std::string mayor;
    int area;

public:
    // Setters
    void setName(std::string Name1);
    void setPopulation(int Population1);
    void setMayor(std::string Mayor1);
    void setArea(int Area1);

    // Getters
    std::string getName();
    int getPopulation();
    std::string getMayor();
    int getArea();

    // Printing function
    void print();
};

#endif