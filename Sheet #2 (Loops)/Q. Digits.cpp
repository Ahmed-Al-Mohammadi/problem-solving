#include <bits/stdc++.h>
using namespace std;

int main() {

	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long N;
		cin >> N;


		if (N == 0) {
			cout << "0" << endl;
			continue;
		}

		bool first = true;
		while (N > 0) {
			if (!first) cout << " ";
			cout << N % 10;
			N /= 10;
			first = false;
		}
		cout << endl;
	}


}