/*
MB-213-A
a12 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_
#include <ostream>

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen

    // Helper stuff
	void setNumDen(int num, int den);

	// output/input stream operator overloads
	friend std::ostream& operator<<(std::ostream& out, const Fraction& f);
	friend std::istream& operator>>(std::istream& in, Fraction& f);

	// * / operator overloads
	Fraction operator*(const Fraction &aux);
	Fraction operator/(const Fraction &aux);
};




#endif /* FRACTION_H_ */