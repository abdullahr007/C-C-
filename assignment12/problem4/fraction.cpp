/*
MB-213-A
a12 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	tmp_gcd = a;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

// Helper stuff
void Fraction::setNumDen(int num, int den)
{	
	if (den == 0) // This can't be a fraction
		return;
	
	// Set the new values as provided in the constructor
	int tmp_gcd = gcd(num, den);

	this->num = num / tmp_gcd;
	this->den = den / tmp_gcd;
}

// output/input stream operator overloads
std::ostream& operator<<(std::ostream& os, const Fraction& f)
{
	// Supply the numbers in order to the output stream
	os << f.num << "/" << f.den;
	return os;
}

std::istream& operator>>(std::istream& in, Fraction& f)
{
	// Get the numbers
	int num, den;
	in >> num >> den;

	if (den == 0) // This can't be a fraction
		return in;
	
	// Put the values in
	f.setNumDen(num, den);

	return in;
}

// * / operator overloads
Fraction Fraction::operator*(const Fraction &aux)
{
	// Simple multiplication stuff that is passed to the parameter constructor
	return Fraction(this->num * aux.num, this->den * aux.den);
}

Fraction Fraction::operator/(const Fraction &aux)
{
	// Same thing as above, only we reverse the aux fraction
	return Fraction(this->num * aux.den, this->den * aux.num);
}