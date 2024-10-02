#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N, Q;
	cin >> N >> Q;
	vector<long long> v(N);
	for (long long i = 0; i < N; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	while (Q--) {
		long long x;
		cin >> x;
		if (binary_search(v.begin(), v.end(), x)) {
			cout << "found" << endl;
		}
		else {
			cout << "not found" << endl;
		}
	}

}