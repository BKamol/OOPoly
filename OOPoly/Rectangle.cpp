#include "Rectangle.h"

Rectangle::Rectangle()
{
	p1 = { 0, 0 };
	p2 = { 0, 0 };
}

Rectangle::Rectangle(Point _p1, Point _p2)
{
	p1 = _p1;
	p2 = _p2;
}

Rectangle::Rectangle(const Rectangle& other)
{
	p1 = other.p1;
	p2 = other.p2;
}

void Rectangle::print()
{
	cout << "Rectangle((" << p1.x << ',' << p1.y << "), (" << p2.x << ',' << p2.y << "))" << endl;
}

double Rectangle::square()
{
	double side1 = p2.x - p1.x;
	double side2 = p2.y - p1.y;
	return side1 * side2;
}

double Rectangle::perimeter()
{
	double side1 = p2.x - p1.x;
	double side2 = p2.y - p1.y;
	return 2*(side1 + side2);
}


