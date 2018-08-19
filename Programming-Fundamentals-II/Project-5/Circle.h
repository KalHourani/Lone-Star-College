// Specification file for the Circle class.
#ifndef Circle_H
#define Circle_H

// Circle class declaration.

class Circle
{
private:
	double radius;
	const double pi = 3.14159;
public:
	Circle();
	Circle(double);
	void setRadius(double);
	double getRadius();
	double getArea();
	double getDiameter();
	double getCircumference();
};

#endif
