/*
MB-213-A
a12 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <iostream>
#include <random>
#include <ctime>
#include <string>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;


int getSize() // Returns a number between 5 and 100
{
	return rand() % 96 + 5;
}

double temp = 0;
const int num_obj = 25; // Number of objects
std::string colors[] = {"RED", "BLACK", "VIOLET", "BLUE"};
int main() {
	srand(time(NULL)); // Initialize the seed

	// Create all the 25 objects
	// Since the problem does not want me to store them in a variable
	// I will  print the required calculations 
	// 0 = Circle
	// 1 = Rectangle
	// 2 = Ring
	// 3 = Square
	for (int i = 0; i <num_obj; ++i)
	{
		cout << endl;
		int shapeId = rand() % 4;
		std::string color = colors[rand() % 4]; // Get a random color
		if (shapeId == 0)
		{
			// Get the radius of the circle
			double radius = getSize();
			Circle circle(color.c_str(), radius);
			// Add it to the array
			cout << circle.calcArea() << endl;
			cout << circle.calcPerimeter() << endl;
		}
		if (shapeId == 1)
		{
			// Get the length and width of the rectangle
			double length = getSize();
			double width = getSize();
			Rectangle rectangle(color.c_str(), length, width);
			
			cout << rectangle.calcArea() << endl;
			cout << rectangle.calcPerimeter() << endl;
		}
		if (shapeId == 2)
		{
			// Get the inner and outer radius of the ring
			double inner = getSize();
			double outer = getSize();
			// Swap them arround if outer is smaller then inner
			if (inner > outer)
			{
				temp = outer;
				outer = inner;
				inner = outer;
			}
			Ring ring(color.c_str(), outer, inner);
			cout << ring.calcArea() << endl;
			cout << ring.calcPerimeter() << endl;
		}
		if (shapeId == 3)
		{
			// Get the length of the square
			double length = getSize();
			Square square(color.c_str(), length);
			cout << square.calcArea() << endl;
			cout << square.calcPerimeter() << endl;
		}
		cout << endl;
	}
	


	return 0;
}
