#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		/*
		   n -> number of different different questions in a single paper
		   m -> number of different questions papers
		   k -> number of questions that comming in exam
		   */
		int n, m, k;
		cin >> n >> m >> k;

		/*
		   a -> Ai is the question that is not in the ith paper
		   p -> list of questions that we are prepared
		   */
		int a[m], p[k];
		for (int i=0; i<m; ++i) cin >> a[i];
		for (int i=0; i<k; ++i) cin >> p[i];

		if (k > n - 1) cout << string(m, '1') << endl;
		else if (k < n - 1) cout << string(m, '0') << endl;
		else {
			int long long weknow = 0;
			int long long sum = (n * (n + 1ll) / 2);

			string ans = "";

			for (int i=0; i<k; ++i) weknow += p[i];
			for (int i=0; i<m; ++i) ans += (sum - a[i] == weknow) ? '1' : '0';

			cout << ans << endl;
		}	
	}

	return 0;
}

