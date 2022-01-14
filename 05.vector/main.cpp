#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>


int main(int argc, char** argv) {

	std::vector<int> vNums(2);
	vNums[0] = 1;
	vNums[1] = 2;
	vNums.push_back(3);

	std::cout << "Vector size : " << vNums.size() << std::endl;

	return 0;
}