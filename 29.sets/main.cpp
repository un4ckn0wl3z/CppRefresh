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
#include <set>


int main(int argc, char** argv) {


	std::set<int> set1{ 5,4,3,2,1,1 };
	std::cout << "Size " << set1.size() << std::endl;
	set1.insert(0);
	std::set<int>::iterator it = set1.begin();
	it++;
	std::cout << "it++ : " <<  *it << std::endl;

	auto val = set1.find(4);
	std::cout << "Found : " << *val << std::endl;



	for (int i: set1) {
		std::cout << i << std::endl;
	}


	return 0;
}







