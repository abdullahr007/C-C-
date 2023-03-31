/*
MB-213-A
a12 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#ifndef _SQUARE_H
#define _SQUARE_H
#include "Area.h"
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double a);
		~Square();

        double calcArea() const;
		// Override 
	  	double calcPerimeter() const;
    private:
        double length;
};

#endif
