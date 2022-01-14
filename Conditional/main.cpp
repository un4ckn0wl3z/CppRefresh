#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>


int main(int argc, char** argv) {

	std::string sAge;
	std::cout << "Enter yout age: ";
	std::cin >> sAge;

	int nAge = stoi(sAge);

	if ((nAge >= 1 ) && (nAge <= 18)) {
		std::cout << "Important Birthday" << std::endl;
	}
	else if ((nAge == 21) || (nAge == 50)) {
		std::cout << "Important Birthday" << std::endl;
	}
	else if (nAge >= 65) {
		std::cout << "Important Birthday" << std::endl;
	}
	else {
		std::cout << "Not an Important Birthday" << std::endl;
	}



	return 0;
}