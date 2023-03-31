/*
MB-213-A
a11 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#ifndef H_VECTOR
#define H_VECTOR

class Vector
{
private:
    unsigned m_size;
    double *m_vector;

public:
    Vector();
    Vector(unsigned, double*);
    Vector(const Vector&);
    ~Vector();

    // Getters and setters
    unsigned getSize() { return m_size; }
    double* getVector() { return m_vector; }
    void setSize(unsigned size) { m_size = size; }
    void setVector(double *);

    
    void print();

    // Maths
    double norm();
    Vector add(const Vector) const; // SUM OF 2 VECTORS
    Vector sub(const Vector) const; // DIFFERENCE OF 2 VECTORS
    double sp(const Vector) const; // SCALAR PRODUCT OF 2 VECTORS
};

#endif