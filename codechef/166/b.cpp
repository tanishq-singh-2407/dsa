#include <iostream>

int main() {
	int t;
	std::cin >> t;
	
	while(t--) {
	    int l, b, h;
	    std::cin >> l >> b >> h;
	    
	    std::cout << (500 / (l*b + b*h + h*l)) << std::endl;
	}
}
