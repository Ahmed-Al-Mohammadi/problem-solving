#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, res;
	char s;
	cin >> a >> s >> b;
	if (s == '+')
	{
		res = a + b;
		cout << res;
	}
	else if (s == '-')
	{
		res = a - b;
		cout << res;
	}
	else if (s == '*')
	{
		res = a * b;
		cout << res;
	}
	else
	{
		res = a / b;
		cout << res;
	}
}
