#ifndef H_BOX
#define H_BOX

/*
MB-213-A
a11 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

class Box
{
private:
    // Properties
    double height = 0;
    double width = 0;
    double depth = 0;

public:
    // Constructors/destructors
    Box();
    Box(double, double, double);
    Box(const Box &);
    ~Box();
    // Setters
    void setHeight(double);
    void setWidth(double);
    void setDepth(double);
    // Getters
    double getHeight() { return height; }
    double getWidth() { return width; }
    double getDepth() { return depth; }

    // Volume 
    double getVolume();
};

#endif