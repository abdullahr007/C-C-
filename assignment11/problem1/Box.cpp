#include "Box.h"

/*
MB-213-A
a11 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


// Constructors/destructors
Box::Box()
{
    // Initialize everythin to 0
    height = 0;
    width = 0;
    depth = 0;
}

Box::Box(double height, double width, double depth)
{
    this->height = height;
    this->width = width;
    this->depth = depth;
}

Box::Box(const Box &aux)
{
    height = aux.height;
    width = aux.width;
    depth = aux.depth;
}

Box::~Box()
{
    // no memory allocated inside of it.
}

// Setters
void Box::setHeight(double height)
{
    this->height = height;
}

void Box::setWidth(double width)
{
    this->width = width;
}

void Box::setDepth(double depth)
{
    this->depth = depth;
}

// Volume stuff
double Box::getVolume()
{
    //The volume
    return height * width * depth;
}