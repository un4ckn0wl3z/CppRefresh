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

	std::string str1 = "I'm a string";
	std::cout << "1st : " << str1[0] << std::endl;
	std::cout << "last : " << str1.back() << std::endl;
	std::cout << "Length : " << str1.length() << std::endl;

	std::string str2 = str1;
	std::string str3(str2, 4);
	std::string str4 = str1 + " and your not";
	str4.append("!");
	str4.erase(12, str4.length() - 1);

	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;
	std::cout << "str3 : " << str3 << std::endl;
	std::cout << "str4 : " << str4 << std::endl;

	if (str4.find("string") != std::string::npos) {
		std::cout << "String index : " << str4.find("string") << std::endl;
	}

	std::cout << "Sub String : " << str4.substr(6,6) << std::endl;

	std::string strNum = std::to_string(1+2);
	std::cout << "strNum : " << strNum << std::endl;

	char letterZ = 'z';
	char num5 = '5';
	char aSpace = ' ';

	std::cout << "Is letterZ a letter or number : " << std::isalnum(letterZ) << std::endl;
	std::cout << "Is z a letter: " << std::isalpha(letterZ) << std::endl;
	std::cout << "Is num5 a number : " << std::isdigit(num5) << std::endl;
	std::cout << "Is aSpace a space : " << std::isspace(aSpace) << std::endl;





	return 0;
}