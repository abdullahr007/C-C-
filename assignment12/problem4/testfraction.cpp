/*
MB-213-A
a12 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
using namespace std;

int main(void)
{
	Fraction a(4, 2);
	Fraction b(17, 11);
	Fraction c(5);

	// This is the replacement for the .print() calls
	cout << a << "\n" << b << "\n" << c << "\n";

	// These are my fractions
	Fraction f1, f2;
	// Read them from the keyboard
	cin >> f1 >> f2;
	// Calculate the stuff
	Fraction product = f1 * f2;
	Fraction div = f1 / f2;
	// Print the stuff
	cout << "The product between " << f1 << " and " << f2 << "is: ";
	cout << product << "\n";
	cout << "The division between " << f1 << " and " << f2 << "is: ";
	cout << div << "\n";
}