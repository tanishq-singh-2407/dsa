#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while(t--) {
		unsigned long long int n;
		std::cin >> n;

		if (n < 4) std::cout << 2 << std::endl;
		else {
			unsigned long long int ans = 1;
			while (n) {
				ans <<= 1;	
				n >>= 2;
			}
			std::cout << (ans >> 1) << std::endl;
		}
	}

	return 0;
}
