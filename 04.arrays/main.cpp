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

	int arrayNums[10] = {1};
	int arrayNums2[] = { 1,2,3 };
	int arrayNums3[] = { 8,3 };

	std::cout << "1st Value : " << arrayNums3[0] << std::endl;
	arrayNums3[0] = 7;
	std::cout << "1st Value : " << arrayNums3[0] << std::endl;

	int arrayNums4[2][2][2] = {
		{{1,2}, {3,4}},
		{{5,6}, {7,8}}
	};
	std::cout << " arrayNums4[0][1][1] : " << arrayNums4[0][1][1] << std::endl;



	return 0;
}