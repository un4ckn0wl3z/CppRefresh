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



int main(int argc, char** argv) {

	std::map<int, std::string> map1;
	map1.insert(std::pair<int, std::string>(1, "Anuwat"));
	map1.insert(std::pair<int, std::string>(2, "Ingon"));
	map1.insert(std::pair<int, std::string>(3, "Pansa"));


	auto match = map1.find(1);
	std::cout << (*match).second << std::endl;
	std::cout << match->second << std::endl;
	std::cout << match->first << std::endl;

	std::cout << "Size: " << map1.size() << std::endl;


	std::map<int, std::string>::iterator it2;
	for (it2 = map1.begin(); it2 != map1.end(); it2++)
	{
		std::cout << it2->first    // string (key)
			<< ':'
			<< it2->second   // string's value 
			<< std::endl;
	}

	return 0;
}







