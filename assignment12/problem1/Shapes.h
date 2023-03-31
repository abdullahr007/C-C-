/*
MB-213-A
a12 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  

        std::string getName() const { return name; }
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center

        double getX() const { return x; }
        double getY() const { return y; }
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon
{ //  hexagon: a regular polygon with 6 edges of the same length
    private:
        std::string m_color; // Color of the hexagon
        double m_side;
    public:
        // Constructors
        Hexagon();
        Hexagon(const std::string&, double, double, 
                double, const std::string&);
        Hexagon(const Hexagon&);

        // Desturctor
        //No memory is being allocated
        ~Hexagon() { }

        // Getters and setters
        std::string getColor() { return m_color; }
        void setColor(std::string color) { m_color = color;}
        double getSide() { return m_side; }
        void setSide(double side) { m_side = side; }

        // Maths
        double perimeter();
        double area();
};
    
#endif