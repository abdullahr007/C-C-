/*
MB-213-A
a10 p8.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#ifndef H_COMPLEX
#define H_COMPLEX

class Complex 
{
private:
    // Member variables
    int m_real = 0;
    int m_imaginary = 0;

public:
    // Constructors and destructors
    Complex();
    Complex(int, int);
    Complex(const Complex &);

    ~Complex();

    // Getters
    int getRealPart() { return m_real; }
    int getImaginaryPart() { return m_imaginary; }

    // Setters
    void setRealPart(int);
    void setImaginaryPart(int);

    // Utilities
    void print();
    //conjugate the current number
    void conjugate();

    // Operations
    // It would have been more practical to just overload the arithmetic operators
    Complex add(const Complex &);
    Complex subtract(const Complex &);
    Complex multiply(const Complex &);
};

#endif