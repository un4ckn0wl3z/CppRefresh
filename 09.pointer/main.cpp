#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

void AssignAge(int* pAge);
void DoubleArray(int* arr, int size);


int main(int argc, char** argv) {
	int age = 26;
	int* pAge = NULL;
	pAge = &age;

	std::cout << "pAge: " << pAge << std::endl;
	std::cout << "pAge value: " << *pAge << std::endl;

	int intArray[] = { 1,2,3,4,5,6 };
	int* pIntArray = intArray;

	std::cout << "0 pIntArray: " << &pIntArray[0] << std::endl;
	std::cout << "0 pIntArray: val: " << pIntArray[0] << std::endl;

	std::cout << "1st pIntArray: " << pIntArray << std::endl;
	std::cout << "1st pIntArray val: " << *(pIntArray) << std::endl;

	std::cout << "2st pIntArray: " << pIntArray+1 << std::endl;
	std::cout << "2st pIntArray val: " << *(pIntArray+1) << std::endl;

	std::cout << "2st pIntArray: " << pIntArray + 2 << std::endl;
	std::cout << "2st pIntArray val: " << *(pIntArray + 2) << std::endl;



	DoubleArray(intArray, 6);
	for (int i = 0; i < 6; ++i) {
		std::cout << "intArray = " << intArray[i] << std::endl;

	}
 
	return 0;
}

void AssignAge(int* pAge) {
	*pAge = 24;
}

void DoubleArray(int* arr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << "i = " << i << std::endl;
		arr[i] = arr[i] * 2;

	}
}
