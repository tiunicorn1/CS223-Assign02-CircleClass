#include "stdafx.h"
#include "Circle.h"
#include <iostream>
#include <iomanip>



	Circle::Circle()
	{
		radius = 1.0;
	}
	Circle::Circle(double initialRadius)
	{
		radius = initialRadius;
	}
	double Circle::getRadius() const
	{
		return radius;
	}
	double Circle::getDiameter() const
	{
		return radius * 2.0;
	}
	double Circle::getArea() const
	{
		return radius * radius * PI;
	}
	double Circle::getCircumference() const
	{
		return Circle::getDiameter() * PI;
	}
	void Circle::setRadius(double newRadius)
	{
		radius = newRadius;
	}
	void Circle::displayCircleInfo(string namecircle)
	{
		cout << fixed << setprecision(2);
		cout << endl;
		cout << namecircle << ":   Radius \t - " << setw(8) << Circle::getRadius()
			<< "    Diameter \t - " << setw(8) << Circle::getDiameter() << endl
			<< "            Area \t - " << setw(8) << Circle::getArea()
			<< "    Circumference \t - " << setw(8) << Circle::getCircumference() << endl;
	}

