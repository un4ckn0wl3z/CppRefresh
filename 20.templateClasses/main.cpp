#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <fstream>
#include <functional>


template <typename T, typename U>
class Person
{
public:
	T height;
	U weight;
	static int numOfPeople;
	Person(T h, U w) {
		height = h;
		weight = w;
		numOfPeople++;
	}

	void GetData() {
		std::cout << "Height : " << height << " Weight : " << weight << std::endl;
	}

};
template <typename T, typename U> int Person<T, U>::numOfPeople;



int main(int argc, char** argv) {

	Person<double, double> Anuwat(165.5, 55.6);
	Anuwat.GetData();

	return 0;
}







