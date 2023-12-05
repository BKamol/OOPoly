#pragma once
#include <iostream>
using namespace std;

struct Point
{
	double x;
	double y;
};

class Figure
{
public:
	const double PI = 3.141592653589793238463;
	virtual void print() = 0;
	virtual double square() = 0;
	virtual double perimeter() = 0;
};