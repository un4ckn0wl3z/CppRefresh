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
#include <deque>
#include <iterator>

int main(int argc, char** argv) {

	std::vector<int> nums2 = { 1,2,3,4,5,6 };
	std::vector<int>::iterator itr;
	for (itr = nums2.begin(); itr < nums2.end(); itr++) {
		std::cout << *itr << std::endl;
	}
	std::cout << "==========================================" << std::endl;

	std::vector<int>::iterator itr2 = nums2.begin();
	std::advance(itr2, 2);
	std::cout << *itr2 << std::endl;

	auto itr3 = std::next(itr2, 2);
	std::cout << *itr3 << std::endl;

	auto itr4 = std::prev(itr3, 1);
	std::cout << *itr4 << std::endl;


	std::cout << "==========================================" << std::endl;

	std::vector<int> num3 = { 1,2,3,4,5,6 };
	std::vector<int> num4 = { 2,3 };

	auto itr5 = num3.begin();

	std::advance(itr5, 1);
	std::copy(num4.begin(), num4.end(), std::inserter(num3, itr5) );

	for (int& i: num3) {
		std::cout << i << std::endl;

	}


	return 0;
}







