/*
MB-213-A
a13 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include "Complex.h"
#include <iostream>

// Constructors and destructors
Complex::Complex()
{   
    
    m_real = 0;
    m_imaginary = 0;
}

Complex::Complex(int real, int imaginary)
{
    m_real = real;
    m_imaginary = imaginary;
}
    
Complex::Complex(const Complex &copy)
{
    m_real = copy.m_real;
    m_imaginary = copy.m_imaginary;
}

Complex::~Complex()
{
    // empty function
}

// Setters
void Complex::setRealPart(int nReal)
{
    m_real = nReal;
}

void Complex::setImaginaryPart(int nImaginary)
{
    m_imaginary = nImaginary;
}

// Utilities
std::ostream& operator<<(std::ostream& out, const Complex& c)
{
    out << c.m_real;
    if (c.m_imaginary > 0) // Print '+' if the imaginary part is positive
        out << "+";
    if (c.m_imaginary != 0) //  imaginary part to print
        out << c.m_imaginary << "i";
    return out;
}

std::istream& operator>>(std::istream& in, Complex& c)
{
    // Read the values and put them in the object
    int re, im;
    in >> re >> im;

    c.m_real = re;
    c.m_imaginary = im;

    return in;
}

void Complex::conjugate()
{
    m_imaginary *= -1; // Reverse the imaginary part
}

// Operations

Complex Complex::operator+(const Complex &aux)
{
    
    return Complex(m_real + aux.m_real, m_imaginary + aux.m_imaginary);
}

Complex Complex::operator-(const Complex &aux)
{
    
    return Complex(m_real - aux.m_real, m_imaginary - aux.m_imaginary);
}

Complex Complex::operator*(const Complex &aux)
{
    
    /*
     * z1 = a + bi then z2 = c + di
     * z1 · z2 = (a · c − b · d) + (b · c + a · d)i.
     * m_real = a
     * m_imaginary = b
     * aux.m_real = c
     * aux.m_imaginary = d
     */
    return Complex(
        m_real * aux.m_real - m_imaginary * aux.m_imaginary,
        m_imaginary * aux.m_real + m_real * aux.m_imaginary
    );
}

Complex& Complex::operator=(const Complex &aux)
{
    m_real = aux.m_real;
    m_imaginary = aux.m_imaginary;
    return *this;
}
