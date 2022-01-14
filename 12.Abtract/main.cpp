#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

class Shape
{
public:
	virtual double Area() = 0;

};

class Circle: public Shape
{
protected:
	double width;
public:
	Circle(double w) {
		width = w;
	}

	double Area() override {
		return 3.14159 * pow((this->width / 2), 2);
	}

};


void ShowArea(Shape& shape);

int main(int argc, char** argv) {

	Circle circle(10);
	ShowArea(circle);

	return 0;
}

void ShowArea(Shape& shape) {
	std::cout << "Area : " << shape.Area() << std::endl;
}

