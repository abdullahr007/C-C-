/*
MB-213-A
a12 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"
using namespace std;
 
Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	cout << "calcArea of Rectangle...";
	return length*width;
}

double Rectangle::calcPerimeter() const{
	cout << "calcPerimeter of Rectangle...";
	return 2 * (length + width);
}