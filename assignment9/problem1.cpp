/*
MB-213-A
a9 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <iostream>
#include <string>

int main()
{
    //country
    std::string myCountry;
    std::cout << "Your Country name?\n";
    std::getline(std::cin, myCountry);
    // Printing country 
    std::cout << "You are from " << myCountry << std::endl;

    return 0;
}