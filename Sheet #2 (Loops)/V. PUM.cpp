#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int c = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << c++ << " ";
		}
		cout << "PUM" << endl;
		c++;

	}
}