#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include "Shape.h"
#include "Circle.h"


void ShowArea(Shape& shape);

int main(int argc, char** argv) {

	Shape shape(10,5);
	Circle circle(10);
	ShowArea(shape);
	ShowArea(circle);


	return 0;
}

void ShowArea(Shape& shape) {
	std::cout << "Area : " << shape.Area() << std::endl;
}

