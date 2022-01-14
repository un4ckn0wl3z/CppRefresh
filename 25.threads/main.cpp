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
#include <deque>
#include <iterator>
#include <memory>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <mutex>


int GenRandom(int max) {
	srand(time(NULL));
	return rand() % max;
}

void ExecuteThread(int id) {
	auto nowTime = std::chrono::system_clock::now();
	time_t sleepTime = std::chrono::system_clock::to_time_t(nowTime);
	tm myLocalTime = *localtime(&sleepTime);

	std::cout << "Thread " << id << " Sleep time: " << ctime(&sleepTime) << std::endl;
	std::cout << "Month : "<< myLocalTime.tm_mon << std::endl;
	std::cout << "Day : " << myLocalTime.tm_mday << std::endl;
	std::cout << "Year : " << myLocalTime.tm_year + 1900 << std::endl;
	std::cout << "Hours : " << myLocalTime.tm_hour << std::endl;
	std::cout << "Minute : " << myLocalTime.tm_min << std::endl;
	std::cout << "Seconds : " << myLocalTime.tm_sec << std::endl;

	std::this_thread::sleep_for(std::chrono::seconds(GenRandom(3)));
	nowTime = std::chrono::system_clock::now();
	sleepTime = std::chrono::system_clock::to_time_t(nowTime);
	std::cout << "Thread " << id << " Awake time: " << ctime(&sleepTime) << std::endl;


}

int main(int argc, char** argv) {

	std::thread th1(ExecuteThread, 1);
	th1.join();

	std::thread th2(ExecuteThread, 2);
	th2.join();

	return 0;
}







