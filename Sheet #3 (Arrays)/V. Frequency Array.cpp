#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, m;
	cin >> n >> m;
	vector<long long> arr1(n);
	vector<long long> arr2(m + 1, 0);

	for (long long i = 0; i < n; i++) {
		cin >> arr1[i];
		arr2[arr1[i]]++;
	}

	for (long long i = 1; i <= m; i++) {
		cout << arr2[i] << endl;
	}

}
