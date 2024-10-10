#include <bits\stdc++.h>
using namespace std;

int main()
{
    string s, s2, sub = "EGYPT";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.substr(i, sub.length()) == sub)
        {
            s2 += " ";
            i += sub.length() - 1;
        }
        else
        {
            s2 += s[i];
        }
    }
    cout << s2 << endl;
}