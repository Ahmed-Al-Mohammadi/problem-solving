#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	a = a / 1000;
	if (a % 2 == 0)
	{
		cout << "EVEN" << endl;
	}
	else
	{
		cout << "ODD" << endl;
	}
}
