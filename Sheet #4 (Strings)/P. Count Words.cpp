#include <bits\stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int co = 0;
	bool  word = false;
	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (isalpha(c))
		{
			if (!word) {
				co++;
				word = true;
			}
		}
		else
		{
			word = false;
		}
	}
	cout << co;

}