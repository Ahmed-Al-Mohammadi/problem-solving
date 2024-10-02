#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double f;
	cin >> n;
	char a1[n];
	int a2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a1[i];
		a2 += a1[i] - '0';
	}
	cout<<a2 ;
}
