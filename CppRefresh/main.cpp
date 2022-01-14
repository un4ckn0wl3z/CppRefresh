#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

int imGlobal = 0;
const double PI = 3.14;

int main(int argc, char** argv) {

	std::cout << "Hello World!!" << std::endl;

	bool married = true;
	char myGrade = 'A';
	short int smallNumber = 10;

	double f1 = 1.1111111;
	double f2 = 1.1111111;

	auto whatAmI = true;

	std::cout << "int Byte:" << sizeof(int) << std::endl;

	printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");

	printf("Sum is %.16f\n", (f1 + f2) );

	std::string num1, num2;
	std::string q1 = "Enter a Number : ";
	std::cout << q1;
	std::cin >> num1;
	std::cout << "Enter Another number : ";
	std::cin >> num2;
	int nNum1 = stoi(num1);
	int nNum2 = stoi(num2);

	printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
	printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
	printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
	printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
	printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));


	std::cout << "Min unsigned short int: " << std::numeric_limits<unsigned short int>::min() << std::endl;
	std::cout << "Max unsigned short int: " << std::numeric_limits<unsigned short int>::max() << std::endl;

	std::cout << "Min short int: " << std::numeric_limits<short int>::min() << std::endl;
	std::cout << "Max short int: " << std::numeric_limits<short int>::max() << std::endl;

	std::cout << "int: " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "int: " << std::numeric_limits<int>::max() << std::endl;

	std::cout << "long int: " << std::numeric_limits<long int>::min() << std::endl;
	std::cout << "long int: " << std::numeric_limits<long int>::max() << std::endl;

	std::cout << "float: " << std::numeric_limits<float>::min() << std::endl;
	std::cout << "float: " << std::numeric_limits<float>::max() << std::endl;

	std::cout << "double: " << std::numeric_limits<double>::min() << std::endl;
	std::cout << "double: " << std::numeric_limits<double>::max() << std::endl;




	return 0;
}