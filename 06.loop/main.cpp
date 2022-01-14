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

	int i = 1;
	while (i <= 20)
	{
		if ((i % 2) == 0) {
			i += 1;
			continue;
		}
		if (i == 15) {
			break;
		}
		std::cout << i << std::endl;
		i += 1;
	}

	std::vector<std::string> words;
	std::stringstream ss("Some Random Words");
	std::string word;

	while (std::getline(ss, word, ' '))
	{
		words.push_back(word);
	}

	for (int i = 0; i < words.size(); ++i) {
		std::cout << words[i] << std::endl;
	}

	int arr3[] = { 1,2,3,4,6,5 };

	for (auto x : arr3) {
		std::cout << x << std::endl;
	}

	std::srand(std::time(NULL));
	int secretNum = rand() % 11;
	int guess = 0;

	do {
		std::cout << "Guess the Number : ";
		std::cin >> guess;
		if (guess > secretNum) {
			std::cout << "Too big!" << std::endl;
		}
		if (guess < secretNum) {
			std::cout << "Too small!" << std::endl;
		}

	} while (guess != secretNum);
	std::cout << "You win!" << std::endl;


	return 0;
}