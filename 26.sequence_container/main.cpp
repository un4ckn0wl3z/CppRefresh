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

	std::deque<int> deq1;
	deq1.push_back(5);
	deq1.push_front(1);
	std::cout << "Size: " << deq1.size() << std::endl;
	for(int i: deq1)
		std::cout << i << std::endl;

	deq1.assign({11,12});
	std::cout << "Size: " << deq1.size() << std::endl;
	for (int i : deq1)
		std::cout << i << std::endl;

	std::cout << deq1[0] << std::endl;
	std::cout << deq1.at(1) << std::endl;

	std::cout << "----------------------------------------" << std::endl;

	std::deque<int>::iterator it = deq1.begin() + 1;
	deq1.insert(it, 3);

	int tempArr[5] = { 6,7,8,9,10 };

	deq1.insert(deq1.end(), tempArr, tempArr+5);
	deq1.erase(deq1.end());
	deq1.pop_front();
	deq1.pop_back();
	std::deque<int> deq2(2, 50);

	deq1.swap(deq2);
	deq1.clear();

	for (int i : deq1)
		std::cout << i << std::endl;




	return 0;
}







