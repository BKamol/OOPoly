#pragma once
#include "Figure.h"
#include <iostream>

using namespace std;

class Circle : public Figure
{
private:
	double x;
	double y;
	double radius;

public:
	Circle(double _x = 0, double _y = 0, double _radius = 0);
	Circle(const Circle& other);

	double get_x() { return x; }
	double get_y() { return y; }
	void set_center(double _x, double _y) { x = _x; y = _y; }

	void print();
	double square();
	double perimeter();
};