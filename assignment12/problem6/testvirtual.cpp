/*
MB-213-A
a12 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;
 
/*
 * This comment is for the class realtion stuff.
 * Area -- Circle -- Ring
 *  |
 * Rectangle -- Square
 * Area the root tree.
 */

/* Quote from problem
"Like in Circle.cpp, output a message on the screen when the method calcArea()
 is being called in any of the classes"
 They are already printing stuff :|. Why are some problems
 vague or contradict themselves?
*/

const int num_obj = 7; // Added 1 more space for the square
int main() {
	Area *list[num_obj];						// (1)
	// Creating a pointer list of Area objects.
	int index = 0;								// (2)
	// This variable  used to go through the list of objects
	double sum_area = 0.0;						// (3)
	//variable will keep track of the total area
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	// Create a Ring object with a radius of 5 and thickness of 3
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	Square black_square("BLACK", 10); // Creating a square
	list[0] = &blue_ring;						// (5)
	// puting ring's address at (4) to the first
	// position of the list
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &black_square;
	while (index < num_obj) {					// (7)
		// Iterating through all the shapes
		(list[index])->getColor();			
		double area = list[index++]->calcArea();// (8)
		// We calculate the area with the given function and add it to the
		// total area after
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
			// We print out discovery
	
	double total_perimeter = 0;
	// Iterate through all the stuff and add their perimeter
	index = 0;
	while (index < num_obj) {
		(list[index])->getColor();
		// Get the perimeter and add it to the total ammout
		double perimeter = list[index++]->calcPerimeter();
		total_perimeter += perimeter;
	}

	cout << "\nThe total perimeter is " << total_perimeter << 
			" units " << endl;
	return 0;
}
