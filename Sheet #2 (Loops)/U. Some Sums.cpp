#include <bits/stdc++.h>
using namespace std;

int main() {

	int N, A, B;
	cin >> N >> A >> B;

	int totalSum = 0;

	for (int i = 1; i <= N; ++i) {
		int sum = 0;
		int num = i;

		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}


		if (sum >= A && sum <= B) {
			totalSum += i;
		}
	}

	cout << totalSum << endl;
}