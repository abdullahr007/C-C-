/*
MB-213-A
a12 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Hexagon::Hexagon(const std::string &name, double nx, double ny, double side,
                 const std::string &color) :
    RegularPolygon(name, nx, ny, 6) //RegularPolygon constructor with 6 edges
{
    m_color = color;
    m_side = side;
}

Hexagon::Hexagon(const Hexagon &shape) : 
    //RegularPolygons copy constructor is not implemented
    // calling the paremeter one instead
 RegularPolygon(shape.getName(), shape.getX(), shape.getY(), 6)
{
    // Copy the stuff from the template Hexagon
    m_side = shape.m_side;
    m_color = shape.m_color;
}

double Hexagon::area()
{
    //area of the hexagon
    return 3 * std::sqrt(3) * m_side * m_side / 2;
}

double Hexagon::perimeter()
{
    //perimeter of the hexagon
    return 6 * m_side;
}