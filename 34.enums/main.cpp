#define _CRT_SECURE_NO_WARNINGS

#include <cstdlib>
#include <iostream>
#include <string>



int main(int argc, char** argv) {

	enum day {Mon=1, Tues, Wed, Thur, Fri};
	enum day Tuesday = Tues;

	std::cout << "Tuesday is the " << Tuesday << "nd of the week" << std::endl;

	for (int i = Mon; i <= Fri; i++) {
		std::cout << i << std::endl;

	}

	return 0;
}







