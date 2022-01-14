#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <algorithm>


std::vector<int> GenerateRandVect(int numOfNums, int min, int max);

int main(int argc, char** argv) {

	std::vector<int> vecValues = GenerateRandVect(10, 1, 50);
	std::sort(vecValues.begin(), vecValues.end(), [](int x, int y) {return x < y;  });
	for (auto val: vecValues) {
		std::cout << val << std::endl;
	}
	std::cout << "==========================================================" << std::endl;
	std::vector<int> evenVecValues;
	std::copy_if(vecValues.begin(), vecValues.end(), std::back_inserter(evenVecValues),
		[](int x) {return (x % 2) == 0;  }
		);

	for (auto val : evenVecValues) {
		std::cout << val << std::endl;
	}

	int sum = 0;
	std::for_each(vecValues.begin(), vecValues.end(), 
		[&](int x) { sum += x;  }
		);

	std::cout << "sum of vecValues: " << sum << std::endl;




	return 0;
}

std::vector<int> GenerateRandVect(int numOfNums, int min, int max) {
	std::vector<int> vecValues;
	std::srand(time(NULL));
	int i = 0, randVal = 0;

	while (i < numOfNums)
	{
		randVal = min + rand() % ((max + 1) - min);
		vecValues.push_back(randVal);
		i++;
	}
	return vecValues;

}



