/*
MB-213-A
a12 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(const char *n, double a) : Rectangle(n, a, a) {
    length = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	cout << "calcArea of Square...";
	return length*length;
}

double Square::calcPerimeter() const{
	cout << "calcPerimeter of Square...";
	return 2 * (length + length);
}