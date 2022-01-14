#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

struct Shape
{
	double length, width;
	Shape(double l = 1, double w = 1) {
		length = l;
		width = w;
	}
	double Area() {
		return length * width;
	}
private:
	int id;
};

struct Circle: Shape
{
	Circle(double width) {
		this->width = width;
	}

	double Area() {
		return 3.14159 * pow((this->width / 2), 2);
	}
};


int main(int argc, char** argv) {

	Shape shape(10, 10);
	std::cout << "Squre Area: " << shape.Area() << std::endl;

	Circle circle(7);
	std::cout << "Circle Area: " << circle.Area() << std::endl;


	return 0;
}



