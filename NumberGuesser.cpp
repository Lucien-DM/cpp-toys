#include <iostream>
#include <unistd.h>

int main() {
	const int NUMBER = 12
	std::cout << "Hey, see if you can guess this number!\n";
	while (true) {
		std::cout << "Take a guess...\n";
		int Guess;
		std::cin >> Guess;
		if (Guess == NUMBER) {
			std::cout << "That's it!\n";
			return 0;
		} else if (Guess > NUMBER) {
			std::cout << "My number is lower\n";
		} else if (Guess < NUMBER) {
			std::cout << "My number is higher\n";
		} //TODO
