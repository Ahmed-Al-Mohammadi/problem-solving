#include <bits\stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	string str2;
	for (int i = 0; i < test; i++) {

		cin >> str2;

		int count = 0;

		for (int j = 0; str2[j] != 0; j++) {

			count++;

		}
		if (count > 10) {

			cout << str2[0] << count - 2 << str2[count - 1] << endl;


		}
		else {

			cout << str2 << endl;

		}

	}

}
