#include <iostream>
#include "City.h"
/*
MB-213-A
a10 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
int main()
{
    //class created
    City Bremen, London, Paris;
    
    // Set the values for all the cities
    Bremen.setName("Bremen");
    Bremen.setPopulation(6999999);
    Bremen.setMayor("NOOONE");
    Bremen.setArea(79898);
  
   //london info info
    London.setName("London");
    London.setPopulation(1);
    London.setMayor("NIKO OMILANA");
    London.setArea(19641242);
   
    // paris info
    Paris.setName("Paris");
    Paris.setPopulation(10);
    Paris.setMayor("NEYMAR JR");
    Paris.setArea(58585);


    // Print them out
    Bremen.print();
    std::cout << std::endl;
    London.print();
    std::cout << std::endl;
    Paris.print();
    std::cout << std::endl;

    return 0;
}