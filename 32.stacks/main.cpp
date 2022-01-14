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
#include <map>
#include <stack>


int main(int argc, char** argv) {

	std::stack<std::string> custs;
	custs.push("Anuwat");
	custs.push("Ingon");
	custs.push("Pansa");
	std::cout << "Size : " << custs.size() << std::endl;
	if (!custs.empty()) {
		for (int i = 0; i < custs.size(); i++) {
			std::cout << "Top : " << custs.top() << std::endl;
			custs.pop();
		}
	}

	
	return 0;
}







