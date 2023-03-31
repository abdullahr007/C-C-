/*
MB-213-A
a12 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

int main(void)
{
	// Create and read the fractions
	Fraction f1, f2;
	std::cout << "Write data for fraction 1: ";
	std::cin >> f1;
	std::cout << "Write data for fraction 2: ";
	std::cin >> f2;

	// Print the biggest boi
	std::cout << "The bigger fraction is: " << ((f1 > f2) ? f1 : f2) << "\n";

	// Compute the sum and the difference
	Fraction sum, dif;
	sum = f1 + f2;
	dif = f1 - f2;

	std::cout << "The sum is: " << sum << "\n";
	std::cout << "The difference is: " << dif << "\n";
}