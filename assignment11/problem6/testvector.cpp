#include "Vector.h"
#include <iostream>
/*
MB-213-A
a11 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
using namespace std; 

int main()
{
    // Create the requested vectors
    Vector v1;
    double values[3] = {1, 2, 3};
    Vector v2(3, values);
    Vector v3(v2);
    double values2[3] = {3, 2, 1};
    Vector v4(3, values2);
    
    // THE NORM OF V2
    cout << "The norm of the second vector is: " << v2.norm() << endl;

    // THE SUM BETWEEN V2 AND V4
    cout << "The sum between v2 and v4 is: ";
    v2.add(v4).print(); 
    cout << "\n";

    // THE DIFFERENCE BETWEEN V2 AND V4
    cout << "The difference between v2 and v4 is: ";
    v2.sub(v4).print(); 
    cout << "\n";
    
    // THE SCALAR PRODUCT BETWEEN V2 AND V4
    cout << "The scalar product between v2 and v4 is: ";
    cout << v2.sp(v4);
    cout << "\n";

    return 0;
}