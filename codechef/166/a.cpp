#include <iostream>

int main() {
	int x;
	std::cin >> x;
	
	if (x >= 7) std::cout << 3 << std::endl;
	else if (x >= 3) std::cout << 2 << std::endl;
	else if (x >= 1) std::cout << 1 << std::endl;
}
