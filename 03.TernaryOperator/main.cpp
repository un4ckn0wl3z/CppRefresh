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

	int age43 = 43;
	bool canIVote = (age43 >= 18) ? true : false;
	std::cout.setf(std::ios::boolalpha);
	std::cout << "Can Anuwat vote: " << canIVote << std::endl;

	return 0;
}