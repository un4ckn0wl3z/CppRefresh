#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>


double Addnumbers(double num1, double num2);
void AssignAge(int age);
int AssignAge2(int age);
void AssignAge3(int* pAge);


int main(int argc, char** argv) {
	printf("%.1f + %.1f = %.1f\n", 5.0 , 4.0, Addnumbers(5.0, 4.0) );
	int age43 = 43;
	AssignAge3(&age43);

	std::cout << "age43 =" << age43 << std::endl;
	
	return 0;
}


double Addnumbers(double num1 = 0, double num2 = 0) {
	return num1 + num2;
}


void AssignAge(int age) {
	age = 24;
}

int AssignAge2(int age) {
	age = 24;
	return age;
}

void AssignAge3(int* pAge) {
	*pAge = 24;
}