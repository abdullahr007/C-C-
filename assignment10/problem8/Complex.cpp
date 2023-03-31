#include "Complex.h"
#include <iostream>
/*
MB-213-A
a10 p8.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

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
    // It does nothing 
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

void Complex::print()
{
    std::cout << m_real;
    if (m_imaginary > 0) // Print '+' if the imaginary part is positive
        std::cout << "+";
    if (m_imaginary == 0) // There is no imaginary part to print
        std::cout << "\n";
    else
        std::cout << m_imaginary << "i\n";
}

void Complex::conjugate()
{
    m_imaginary *= -1; // Reverse the imaginary part
}

// Operations

Complex Complex::add(const Complex &aux)
{

    return Complex(m_real + aux.m_real, m_imaginary + aux.m_imaginary);
}

Complex Complex::subtract(const Complex &aux)
{
    return Complex(m_real - aux.m_real, m_imaginary - aux.m_imaginary);
}

Complex Complex::multiply(const Complex &aux)
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
