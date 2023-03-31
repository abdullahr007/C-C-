/*
MB-213-A
a12 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std; 
int main()
{
    // the shapes center position not specified ,
    // which is needed as it is derived from CenteredShape.
    // taking it zero

    // Create the blue hexagon
    Hexagon blueHexagon("blue hexagon", 0, 0, 9, "blue");

    // Create the green hexagon
    Hexagon greenHexagon("green hexagon", 0, 0, 15, "green");

    // Ceate the copy of the green hexagon
    Hexagon greenHexagonCopy(greenHexagon);

    // Print the requested stuff
    cout << "Area of the first hexagon :";
    cout << blueHexagon.area() << endl;
    cout << "Perimeter of the first hexagon: ";
    cout << blueHexagon.perimeter() << "\n\n";

    cout << "Area of the second hexagon :";
    cout << greenHexagon.area() << endl;
    cout << "Perimeter of the second hexagon: ";
    cout << greenHexagon.perimeter() << "\n\n";
    
    cout << "Area of the third hexagon:";
    cout << greenHexagonCopy.area() <<endl;
    cout << "Perimeter of the third hexagon: ";
    cout << greenHexagonCopy.perimeter() << "\n\n";
    return 0;
}