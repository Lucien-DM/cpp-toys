#include <iostream>

int main() {
	const int NUMBER = 12;
	std::cout << "Guess what number I'm thinking of.\n";
	int x;
	std::cin >> x;
	if (x == NUMBER) {
		std::cout << "That's it!\n";
		return 0;
	} else {
		std::cout << "That's not it...\n";
		return 0;
	}
}
