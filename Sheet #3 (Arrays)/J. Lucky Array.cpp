#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, mini, c = 0;
	double f;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}
	mini = *min_element(v.begin(), (v.end() - 1));
	for (int j = 0; j < v.size(); j++)
	{
		if (v[j] == mini)
		{
			c += 1;
		}
	}
	if (c % 2 == 0)
	{
		cout << "Unlucky\n";
	}
	else
	{
		cout << "Lucky\n";
	}

}
