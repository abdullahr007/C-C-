/*
MB-213-A
a11 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

#define PI 3.1415926535897932384626433

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
    // Getters and setters
		std::string getName() const { return name; }
		void setName(std::string n) { name = n; }

};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
        // Getters and setters
		int getX() const { return x; }
		int getY() const { return y; }
		void setX(int X) { x = X; }
		void setY(int Y) { y = Y; }
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
	// Getters and setters
		int getEdgesNumber() const { return EdgesNumber; }
		void setEdgesNumber(int n) { EdgesNumber = n; }

};
class Rectangle : public RegularPolygon
{ // a rectangle is a polygon with 4 edges and 2 difference lengths
	private:
		double width;
		double height;
	public:
		Rectangle();
		Rectangle(const std::string&, double, double, double, double);
		Rectangle(const Rectangle&);

		// Getters and setters
		double getWidth() { return width; }
		double getHeight() { return height; }
		void setWidth(double w) { width = w; }
		void setHeight(double h) { height = h; }

		// Other stuff
		double perimeter() { return (width + height) * 2; }
		double area() { return width * height; }
};

class Square : public Rectangle
{ // A square is a rectangle, but with only 1 length
	private:
		double side;
	public:
		Square();
		Square(const std::string&, double, double, double);
		Square(const Square&);

		// Getters and setters
		double getSide() { return side; }
		void setSide(double s) { side = s; }

		// Other stuff
		double perimeter() { return side * 4; }
		double area() { return side * side; }

};
class Circle : public CenteredShape 
{  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);

		// Getters and setters
		double getRadius() const { return Radius; }
		void setRadius(double r) { Radius = r; }
	
		// Other stuff
		double perimeter() { return Radius * Radius * PI; }
		double area() { return 2 * PI * Radius; }
};

    
#endif