#include "Vector.h"
#include <iostream>
#include <cmath>
/*
MB-213-A
a11 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

// Constructors
Vector::Vector() : m_size(0)
{
    m_vector = new double[0];
}

Vector::Vector(unsigned size, double *array)
{
    m_size = size;
    m_vector = new double[size];
    // Copy elements from argument to  actual storage
    for (unsigned i = 0; i < size; ++i)
    {
        m_vector[i] = array[i];
    }
}

Vector::Vector(const Vector& vector)
{
    m_size = vector.m_size;
    m_vector = new double[m_size];
    // Copy elements from the argument to  actual storage
    for (unsigned i = 0; i < m_size; ++i)
    {
        m_vector[i] = vector.m_vector[i];   
    }
}

// Destructor
Vector::~Vector()
{
    delete[] m_vector;
}

// Other methods
void Vector::setVector(double *vector)
{
    // Copy all the elements from the argument to the actual storage
    for (unsigned i = 0; i < m_size; ++i)
    {
        m_vector[i] = vector[i];
    }
}

// It print the vector
void Vector::print()
{
    // Print  the values with a space
    for (unsigned i = 0; i < m_size; ++i)
    {
        std::cout << m_vector[i] << " ";
    }
}

// MATH STUFF
double Vector::norm()
{
    double norm = 0;
    // Calculate the norm
    for (unsigned i = 0; i < m_size; ++i)
    {
        norm += m_vector[i] * m_vector[i];
    }
    return std::sqrt(norm);
}

Vector Vector::add(const Vector v) const
{
    // Since we can assume that all the arguments are valid
    // no need to check if both vectors have the same length
    double *newV = new double[m_size]; // Create the memory for the calculation
    for (unsigned i = 0; i < m_size; ++i)
    {
        newV[i] = m_vector[i] + v.m_vector[i];
    }

    Vector newVector(m_size, newV);
    delete[] newV; // dealocate the memory

    return newVector;
}

Vector Vector::sub(const Vector v) const
{
    // Since we can assume that all the arguments are valid
    //  no need to check if both vectors have the same length
    double *newV = new double[m_size]; // Create the memory for the calculation
    for (unsigned i = 0; i < m_size; ++i)
    {
        newV[i] = m_vector[i] - v.m_vector[i];
    }

    Vector newVector(m_size, newV);
    delete[] newV; // dealocate the memory

    return newVector;
}

double Vector::sp(const Vector v) const
{
    // Since we can assume that all the arguments are valid
    // no need to check if both vectors have the same length
    double scalar = 0;
    for (unsigned i = 0; i < m_size; ++i)
    {
        scalar += m_vector[i] * v.m_vector[i];
    }

    return scalar;
}