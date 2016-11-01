// Implementation file for the Circle class.
#include "Circle.h"
#include <cstdlib>
#include <iostream>


Circle::Circle() //default constructor
{
	radius = 0.0;
}

Circle::Circle(double length) //constructor that takes radius as input
{
	if (length >= 0)
	{
		radius = length;
	}
	else
	{
		std::cout << "Invalid radius.\n";
		exit(EXIT_FAILURE);
	}
}

void Circle::setRadius(double length)
{
	if (length >= 0)
	{
		radius = length;
	}
	else
	{
		std::cout << "Invalid radius.\n";
		exit(EXIT_FAILURE);
	}
}
double Circle::getRadius()
{
	return radius;
}
double Circle::getArea()
{
	return pi * radius * radius;
}
double Circle::getDiameter()
{
	return 2 * radius;
}
double Circle::getCircumference()
{
	return 2 * pi * radius;
}
