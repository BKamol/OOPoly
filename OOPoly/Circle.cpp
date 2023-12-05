#include "Circle.h"

using namespace std;

Circle::Circle(double _x, double _y, double _radius)
{
	x = _x;
	y = _y;
	radius = _radius;
}

Circle::Circle(const Circle& other)
{
	x = other.x;
	y = other.y;
	radius = other.radius;
}

void Circle::print()
{
	cout << "Circle(x=" << x << ", y=" << y << ", radius=" << radius << ")" << endl;
}

double Circle::square()
{
	return radius * radius * PI;
}

double Circle::perimeter()
{
	return 2 * PI * radius;
}


