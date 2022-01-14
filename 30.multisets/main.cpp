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

	std::multiset<int> mset1{ 1,2,2,3,4 };
	mset1.insert(4);
	mset1.insert(0);

	if (!mset1.empty()) {
		for (int i : mset1) {
			std::cout << i << std::endl;
		}
	}




	return 0;
}







