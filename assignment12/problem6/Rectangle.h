/*
MB-213-A
a12 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

class Rectangle : public Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
		// Override 
	  	double calcPerimeter() const;
	private:
		double length;
		double width;
};

#endif
