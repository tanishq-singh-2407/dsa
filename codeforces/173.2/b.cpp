#include <iostream>
#include <vector>

int main() {
	int t;
	std::cin >> t;

	while(t--) {
		unsigned long long int n, d;
		std::cin >> n >> d;

		std::vector<int> ans;

		// for 1
		ans.push_back(1);

		// for 3
		if (n>=3 || d%3==0) ans.push_back(3);

		// for 5
		if (d == 5) ans.push_back(5);

		// for 7
		if (n >= 3 || d%7 == 0) ans.push_back(7);

		// for 9
		if (n>=6 || (d%3==0 && n>=3) || d%9==0) ans.push_back(9);

		for (const int &val : ans) std::cout << val << " ";
		std::cout << std::endl;

		ans.clear();
	}

	return 0;
}
