#include "Triangle.h"
#include <cmath>


Triangle::Triangle()
{
	p1 = { 0, 0 };
	p2 = { 0, 0 };
	p3 = { 0, 0 };
}

Triangle::Triangle(Point _p1, Point _p2, Point _p3)
{
	p1 = _p1;
	p2 = _p2;
	p3 = _p3;
}

Triangle::Triangle(const Triangle& other)
{
	p1 = other.p1;
	p2 = other.p2;
	p3 = other.p3;
	double s1 = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	double s2 = sqrt((p1.x - p3.x) * (p1.x - p3.x) + (p1.y - p3.y) * (p1.y - p3.y));
	double s3 = sqrt((p3.x - p2.x) * (p3.x - p2.x) + (p3.y - p2.y) * (p3.y - p2.y));
}

double* Triangle::get_sides()
{
	double s1 = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	double s2 = sqrt((p1.x - p3.x) * (p1.x - p3.x) + (p1.y - p3.y) * (p1.y - p3.y));
	double s3 = sqrt((p3.x - p2.x) * (p3.x - p2.x) + (p3.y - p2.y) * (p3.y - p2.y));
	double sides[3] = {s1, s2, s3};
	return sides;
}

void Triangle::set_points(Point _p1, Point _p2, Point _p3)
{
	p1 = _p1; p2 = _p2; p3 = _p3;
}

void Triangle::print()
{
	cout << "Triangle(" << p1.x << ',' << p1.y << "), (" << p2.x << ',' << p2.y << "), (" << p3.x << ',' << p3.y << "))" << endl;
}

double Triangle::perimeter()
{
	double* sides = get_sides();
	return sides[0] + sides[1] + sides[2];
}

double Triangle::square()
{
	double* sides = get_sides();
	double s1 = sides[0]; double s2 = sides[1]; double s3 = sides[2];
	double p = (s1 + s2 + s3) / 2;
	double sq = sqrt(p * (p - s1) * (p - s2) * (p - s3));
	return sq;
}

