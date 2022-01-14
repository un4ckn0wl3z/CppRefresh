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
#include <memory>
#include <stdio.h>


int main(int argc, char** argv) {

	int amtToSore;
	std::cout << "How many numbers do you want to store: ";
	std::cin >> amtToSore;

	int* pNums;
	pNums = (int*)malloc(amtToSore * sizeof(int));
	std::cout << pNums << std::endl;

	if (pNums != NULL) {
		int i = 0;
		while (i < amtToSore) {
			std::cout << "Enter a number: ";
			std::cin >> pNums[i];
			i++;
		}
	}

	std::cout << "You entered these numbers" << std::endl;
	for (int i = 0; i < amtToSore; i++) {
		if (pNums != NULL) {
			std::cout << pNums[i] << std::endl;
		}

	}


	delete pNums;
	return 0;
}







