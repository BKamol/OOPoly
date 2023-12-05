#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
	Point p1;
	Point p2;

public:
	Rectangle();
	Rectangle(Point _p1, Point _p2);
	Rectangle(const Rectangle& other);

	Point get_p1() { return p1; }
	Point get_p2() { return p2; }
	void set_points(Point _p1, Point _p2) { p1 = _p1; p2 = _p2; }

	void print();
	double square();
	double perimeter();

};