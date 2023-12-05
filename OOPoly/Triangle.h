#pragma once
#include "Figure.h"


class Triangle : public Figure
{
private:
	Point p1;
	Point p2;
	Point p3;

public:
	Triangle();
	Triangle(Point _p1, Point _p2, Point _p3);
	Triangle(const Triangle& other);

	Point get_p1() { return p1; }
	Point get_p2() { return p2; }
	Point get_p3() { return p3; }
	double* get_sides();

	void set_points(Point _p1, Point _p2, Point _p3);

	void print();
	double square();
	double perimeter();

};