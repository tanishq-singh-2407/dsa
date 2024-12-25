#include <iostream>

#define ele 1,2,3,4

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		int a[n];
		for (int i=0; i<n; ++i) std::cin >> a[i];

		int arr[4] = {ele};
		for (const int &val: arr)
			std::cout << val << std::endl;
	}

	return 0;
}
