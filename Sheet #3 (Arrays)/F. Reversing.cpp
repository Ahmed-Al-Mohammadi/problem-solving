#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}

	for (int j = v.size() - 1; j >= 0; j--)
	{
		cout << v[j] << " ";
	}
}
