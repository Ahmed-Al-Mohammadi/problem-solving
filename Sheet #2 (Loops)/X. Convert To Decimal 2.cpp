#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		int count = 0;
		while (N > 0) {
			if (N % 2 == 1)
				count++;
			N /= 2;
		}
		int result = (1 << count) - 1;
		cout << result << endl;
	}

}
