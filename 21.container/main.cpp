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

	std::deque<int> nums = { 1,2,3,4,5,6 };
	nums.push_front(0);
	nums.push_back(7);

	for (int x: nums) {
		std::cout << x << std::endl;
	}

	return 0;
}







