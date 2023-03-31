/*
MB-213-A
a12 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
		// Override
	  	double calcPerimeter() const;
	private:
		double radius;
};

#endif
