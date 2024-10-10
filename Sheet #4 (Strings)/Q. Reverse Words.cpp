#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	getline(cin, s1);
	string word;

	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == ' ') {
			reverse(word.begin(), word.end());
			s2 += word + ' ';
			word = "";
		}
		else {
			word += s1[i];
		}
	}

	reverse(word.begin(), word.end());
	s2 += word;

	cout << s2 << endl;


}
