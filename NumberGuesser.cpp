#include <iostream>
#include <unistd.h>

int main() {
	const int NUMBER = 12;
	std::cout << "Hey, see if you can guess this number!\n";
	int Guess;
	while (true) {
		std::cout << "Take a guess...\n";
		std::cin >> Guess;
		if (std::cin.fail()) {
			std::cout << "That's not a number!\n";
			std::cin.clear();
			std::cin.ignore(999, '\n');
		} else if (Guess == NUMBER) {
			std::cout << "That's it!\n";
			return 0;
		} else if (Guess > NUMBER) {
			std::cout << "My number is lower\n";
		} else if (Guess < NUMBER) {
			std::cout << "My number is higher\n";
		} else {
			std::cout << "error\n";
			return 1;
		}
	}
}
