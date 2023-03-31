/*
MB-213-A
a12 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Ring.h"
using namespace std;
 
Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
	outerradius = outer;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const{
	// Ok so what is the perimeter of a Ring exactly?
	// Is it the outer ring or the outer ring + inner ring.
	cout << "calcPerimeter of Ring...";
	return (2 * M_PI * (innerradius + outerradius));
}