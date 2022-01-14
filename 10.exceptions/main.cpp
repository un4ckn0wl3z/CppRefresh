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
	

	double num3 = 10, num4 = 0;

	try
	{
		if (num4 == 0) {
			throw "Divistion by Zero";
		}
		else {
			printf("%.1f / %.1f = %.1f\n", num3, num4, num3/num4);
		}
	}
	catch (const char* exp)
	{
		std::cout << "Error : " << exp << std::endl;
	}

	return 0;
}
