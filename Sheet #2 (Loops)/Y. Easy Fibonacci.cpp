#include <bits\stdc++.h>
using namespace std;

int main() {
	int n, f = 0, s = 1;
	cin >> n;
	if (n == 1) {
		cout << f << " ";
	}
	else if (n == 2)
	{
		cout << f << " " << s << " ";
	}
	else
	{
		cout << f << " " << s << " ";
		for (int i = 2; i < n; i++)
		{
			int res = f + s;
			cout << res << " ";
			f = s;
			s = res;

		}
	}

}