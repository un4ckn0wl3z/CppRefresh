#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>


class Box
{
public:
	double length, width, breadth;
	std::string boxString;
	Box() {
		length = 1;
		width = 1;
		breadth = 1;
	}

	Box(double l, double w, double b) { 
		length = l;
		width = w;
		breadth = b;
	}

	Box& operator ++ () {
		this->length++;
		this->width++;
		this->breadth++;
		std::cout << "this: " << this << std::endl;
		std::cout << "*this: " << *this << std::endl;
		return *this;
	}

	operator const char* () {
		std::ostringstream boxStream;
		boxStream << "Box : " << length << ", "
			<< width << ", "
			<< breadth << std::endl;

		boxString = boxStream.str();
		return boxString.c_str();
	}

	Box operator + (const Box& box2) {
		Box boxSum;
		boxSum.length = this->length + box2.length;
		boxSum.width = this->width + box2.width;
		boxSum.breadth = this->breadth + box2.breadth;

		return boxSum;
	}

	bool operator == (const Box& box2) {
		return ((this->length == box2.length) && (this->width == box2.width) && (this->breadth == box2.breadth));
	}

};


int main(int argc, char** argv) {

	Box box(10, 10, 10);
	++box;
	std::cout << box << std::endl;

	Box box2(5, 5, 5);

	std::cout << "Box1 + Box2 = " << box + box2 << std::endl;

	std::cout << "Box1 == Box2 = " << (box == box2) << std::endl;


	

	return 0;
}



