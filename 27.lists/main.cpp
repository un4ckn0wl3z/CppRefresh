#define _CRT_SECURE_NO_WARNINGS

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
#include <iterator>
#include <memory>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <mutex>
#include <deque>
#include <list>
#include <forward_list>


int main(int argc, char** argv) {

	int arr[5]{ 1,2,3,4,5 };
	std::list<int> list1;
	list1.insert(list1.begin(), arr, arr + 5);

	list1.assign({ 15,11,12 });
	list1.push_back(5);
	list1.push_front(9);

	for (int i : list1)
		std::cout << i << std::endl;

	std::cout << "------------SIZE---------------" << std::endl;
	std::cout << list1.size() << std::endl;

	std::cout << "------------advance---------------" << std::endl;
	std::list<int>::iterator it2 = list1.begin();
	std::advance(it2, 1);
	std::cout << *it2 << std::endl;

	it2 = list1.begin();
	list1.insert(it2, 3);
	std::cout << "------------insert---------------" << std::endl;

	for (int i : list1)
		std::cout << i << std::endl;


	std::list<int>::iterator it3 = list1.begin();
	std::advance(it3, 2);
	list1.erase(it2, it3);

	std::cout << "------------list2---------------" << std::endl;


	int arr2[6]{ 10,9,8,7,6,6 };
	std::list<int> list2;
	list2.insert(list2.begin(), arr2, arr2+6);
	list2.sort();

	for (int i : list2)
		std::cout << i << std::endl;


	return 0;
}







