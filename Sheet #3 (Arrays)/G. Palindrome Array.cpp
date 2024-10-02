#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> v(n);
	vector <int> v2(n);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}


	for (int j = 0; j < v.size(); j++)
	{
		v2[j] = v[j];
	}
	reverse(v2.begin(), v2.end());
	if (v == v2)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}
