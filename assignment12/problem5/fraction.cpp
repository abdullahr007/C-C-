/*
MB-213-A
a12 p5.[c or cpp or h]
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
	// Checking validity of the parameters
	if (d == 0) // This can't be a fraction
	{
		// Initialize to default values
		num = 1;
		den = 1;
		return;
	}
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

	if (den == 0) // not a fraction
		return in;
	
	// Put the values in
	f.setNumDen(num, den);

	return in;
}

// * / operator overloads
Fraction Fraction::operator*(const Fraction &aux)
{
	//  multiplication 
	return Fraction(this->num * aux.num, this->den * aux.den);
}

Fraction Fraction::operator/(const Fraction &aux)
{
	// Same thing as above, only we reverse the aux fraction
	return Fraction(this->num * aux.den, this->den * aux.num);
}

// +-=<> operator overloads
Fraction Fraction::operator+(const Fraction &aux)
{
	// denominator passing it to the constructor.
	// The constructor will handle the "normalization"
	return Fraction(
		num * aux.den + aux.num * den,
		den * aux.den
	);
}

Fraction Fraction::operator-(const Fraction &aux)
{
	// denominator and passing them to the constructor.
	// The constructor will handle the "normalization" part anyways.
	return Fraction(
		num * aux.den - aux.num * den,
		den * aux.den
	);
}

Fraction& Fraction::operator=(const Fraction &aux)
{
	num = aux.num;
	den = aux.den;
	return *this;
}

//checking  when they have the same denomitor
bool operator<(const Fraction &f1, const Fraction &f2)
{
	return (f1.num * f2.den < f2.num * f1.den);
}

bool operator>(const Fraction &f1, const Fraction &f2)
{
	return (f1.num * f2.den > f2.num * f1.den);
}