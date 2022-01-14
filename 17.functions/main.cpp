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

double MulBy2(double num) {
	return num * 2;
}

double Domath(std::function<double(double)> func, double num) {
	return func(num);
}


double MulBy3(double num) {
	return num * 3;
}

int main(int argc, char** argv) {

	auto time2 = MulBy2;
	std::cout << "5 * 2 = " << time2(5) << std::endl;
	std::cout << "6 * 2 = " << Domath(MulBy2, 6) << std::endl;

	std::vector<std::function<double(double)>> funcs(2);
	funcs[0] = MulBy2;
	funcs[1] = MulBy3;

	std::cout << "10 * 2 = " << funcs[0](10) << std::endl;


	return 0;
}







