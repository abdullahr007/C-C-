/*
MB-213-A
a11 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std; 
int main(int argc, char** argv) 
{

    Circle c("First circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 1, 1, 3);

    r.printName();
    c.printName();

    cout << "Area of circle is" << c.area() << endl;
    cout << "Perimeter of Circle is " << c.perimeter() << endl;

    // Create the rectangle and print its stuff
    Rectangle rr("first rectangle", 0, 0, 10, 5);
    cout << "Area of rectangle is " << rr.area() << endl;
    cout << "Perimeter of rectangle is " << rr.perimeter() << endl;

    // Create the square and print its stuff
    Square s("first square", 0, 0, 5);
    cout << "Area of square is" << s.area() << endl;
    cout << "Perimeter of square is " << s.perimeter() << endl;
}