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

	std::forward_list<int> fl1;
	fl1.assign({1,2,3,4});
	fl1.push_front(0);
	fl1.pop_front();

	std::cout << "Front : " << fl1.front() << std::endl;

	std::forward_list<int>::iterator it4 = fl1.begin();
	it4 = fl1.insert_after(it4, 5 );
	fl1.emplace_front(6);

	for (int i : fl1)
		std::cout << i << std::endl;


	return 0;
}







