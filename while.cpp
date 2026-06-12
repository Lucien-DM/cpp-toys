#include <iostream>
#include <unistd.h>
int main() {
	std::cout << "COMMENCE COUNTDOWN!\nT MINUS, ";
	int i = 10;
	while (i > 0) {
		std::cout << i <<", " << std::flush;
		sleep(1);
		i--;
	}
	std::cout << "\nBLAST OFF!!!\n";
	return 0;
}
