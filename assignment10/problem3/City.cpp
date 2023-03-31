#include "City.h"
#include <iostream>
/*
MB-213-A
a10 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
// Setters
void City::setName(std::string Name1)
{
    name = Name1;
}

void City::setPopulation(int Population1)
{
    population = Population1;
}

void City::setMayor(std::string Mayor1)
{
    mayor = Mayor1;
}

void City::setArea(int Area1)
{
    area = Area1;
}

// Getters
std::string City::getName()
{
    return name;
}

int City::getPopulation()
{
    return population;
}

std::string City::getMayor()
{
    return mayor;
}

int City::getArea()
{
    return area;
}

// Printing method
void City::print()
{
    std::cout << "This is " << name << std::endl;
    std::cout << "Total " << population << " number of people lives here."<< std::endl;
    std::cout <<  mayor << " is the mayor of it"<< std::endl;
    std::cout << "Its area is  " << area << " km square."<< std::endl;
}
