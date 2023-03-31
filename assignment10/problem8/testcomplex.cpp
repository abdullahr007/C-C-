#include <iostream>
#include "Complex.h"

/*
MB-213-A
a10 p8.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int main()
{
    int a, b;
    // Get the data for the first number
    std::cin >> a >> b;
    Complex c1(a, b);

    // Get the data for the second number
    std::cin >> a >> b;
    Complex c2(a, b);

    /*
     * a) the conjugate of the first instance determined 
     *    and printed;
     */
    c1.conjugate();
    std::cout << "The first number conjugated is: ";
    c1.print();

    /*
      b) the sum of the two instances should be determined 
        and printed
     */

    // reverse the number back and make the calculations
    c1.conjugate();
    Complex sum(c1.add(c2)); // Add 
    std::cout << "The sum of the first 2 numbers is: ";
    sum.print();

    // c) the difference between the second and first instance printed 
    
    Complex dif(c1.subtract(c2)); // Subtract
    std::cout << "The difference of the first 2 numbers is: ";
    dif.print();

    /*
     * d) the multiplication of the two instances
     *    determined and printed on the screen
     */
    Complex mult(c1.multiply(c2)); // Multiply
    std::cout << "The multiplications of the first 2 numbers is: ";
    mult.print();

    return 0;
}