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

template <typename T>
void Times2(T val) {
	std::cout << val << " * 2 = " << val * 2 << std::endl;
}

template <typename T>
T Add(T val1, T val2) {
	return val1 + val2;
}

template <typename T>
T Max(T val1, T val2) {
	return (val1 < val2) ? val2 : val1;
}

int main(int argc, char** argv) {

	Times2(5);
	Times2(5.3);

	std::cout << "5 + 4 = " << Add(5, 4) << std::endl;
	std::cout << "10.5 + 4.4 = " << Add(10.5, 4.4) << std::endl;

	std::cout << "Max 4 or 8? : " << Max(4, 8) << std::endl;
	std::cout << "Max 'A' or 'B'? : " << Max('A', 'B') << std::endl;
	std::cout << "Max 'Dog' or 'Cat'? : " << Max("Dog", "Cat") << std::endl;



	return 0;
}







