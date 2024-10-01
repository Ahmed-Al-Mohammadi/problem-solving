#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    string s, ss;
    cin >> n;
    s = to_string(n);
    for (int i = s.size() - 1; i >= 0; i--)
    {
        ss += s[i];
    }
    long long sss = stoi(ss);
    cout << sss << endl;
    if (sss == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}