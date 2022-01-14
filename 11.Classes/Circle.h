#pragma once
#include "Shape.h"

class Circle: public Shape
{
public:
	Circle();
	Circle(const Circle& orig);
	virtual ~Circle();
	Circle(double width);
	double Area();
};

