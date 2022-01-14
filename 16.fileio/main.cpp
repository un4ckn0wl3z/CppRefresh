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



int main(int argc, char** argv) {

	std::ofstream writeToFile;
	std::ifstream readFromFile;

	std::string txtToWrite = "";
	std::string txtFromFile = "";

	/*
	writeToFile.open("test.txt", std::ios_base::out | std::ios_base::trunc);
	if (writeToFile.is_open()) {
		writeToFile << "Beginnning of file\n";
		std::cout << "Enter data to file." << std::endl;
		std::getline(std::cin, txtToWrite);
		writeToFile << txtToWrite;
		writeToFile.close();
	}
	*/

	readFromFile.open("test.txt", std::ios_base::in);
	if (readFromFile.is_open()) {
		while (readFromFile.good())
		{
			std::getline(readFromFile, txtFromFile);
			std::cout << txtFromFile << std::endl;
		}
		readFromFile.close();
	}


	return 0;
}







