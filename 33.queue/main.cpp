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
#include <queue>


int main(int argc, char** argv) {

	std::queue<std::string> cast;
	cast.push("Thailand");
	cast.push("Indonesia");
	cast.push("Vietnam");
	int size = cast.size();
	if (!cast.empty()) {
		for (int i = 0; i < size; i++) {
			std::cout << cast.front() << std::endl;
			cast.pop();
			std::cout << "Current Size: " << cast.size() << std::endl;

		}
	}

	return 0;
}







