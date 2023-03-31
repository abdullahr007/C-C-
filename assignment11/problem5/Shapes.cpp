/*
MB-213-A
a11 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std; 
/*
    Shape section
*/
// Constructors
Shape::Shape()
{
    name = "no name given";
}

Shape::Shape(const string& n) : name(n) 
{
}

Shape::Shape(const Shape& shape)
{
    name = shape.name;
}

// Other methods
void Shape::printName() const 
{
	cout << name << endl;
}

/*
    CenterdShape section
*/
// Constructors
CenteredShape::CenteredShape() : Shape()
{
    x = 0;
    y = 0;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) 
{
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(const CenteredShape& shape) : Shape(shape)
{
    x = shape.x;
    y = shape.y;
}

// Other methods
void CenteredShape::move(double nx, double ny)
{
    x = nx;
    y = ny;
}

/*
    RegularPolygon section
*/
// Constructors
RegularPolygon::RegularPolygon() : CenteredShape()
{
    EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon& shape) : 
    CenteredShape(shape)
{
    EdgesNumber = shape.EdgesNumber;
}

/*
    Rectangle section
*/
// Constructors
Rectangle::Rectangle() : RegularPolygon()
{
    width = 0;
    height = 0;
    setEdgesNumber(4);
}

Rectangle::Rectangle(const string& n, double nx, double ny, 
                        double nwidth, double nheight) : 
                        RegularPolygon(n, nx, ny, 4)
{
    width = nwidth;
    height = nheight;
}

Rectangle::Rectangle(const Rectangle& shape) : RegularPolygon(shape)
{
    width = shape.width;
    height = shape.height;
}

/*
    Square section
*/
// Constructors
Square::Square() : Rectangle()
{
    side = 0;
}

Square::Square(const string& n, double nx, double ny, double nside) : 
    Rectangle(n, nx, ny, nside, nside)
{
    side = nside;
}

Square::Square(const Square& shape) : 
    Rectangle(shape.getName(), shape.getX(), shape.getY(), 
            shape.side, shape.side)
{
    side = shape.side;
}

/*
    Circle section
*/
// Constructors
Circle::Circle() : CenteredShape()
{
    Radius = 0;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Circle::Circle(const Circle& shape) : CenteredShape(shape)
{
    Radius = shape.Radius;
}
