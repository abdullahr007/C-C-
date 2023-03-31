/*
MB-213-A
a12 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
		// Override 
	  	double calcPerimeter() const;
	private:
		double innerradius;
		double outerradius;
};

#endif
