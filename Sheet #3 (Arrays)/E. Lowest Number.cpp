#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, mini = 999999, ind;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}
	for (int j = 0; j < v.size(); j++)
	{
		if (v[j] < mini) {
			mini = v[j];
			ind = (j + 1);

		}
	}
	cout << mini << " " << ind;

}
