#include <bits\stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    char c1, c2;
    cin >> s1;
    cin >> s2;
    cout << s1.length() << " " << s2.length() << endl;
    string s3 = s1 + s2;
    cout << s3 << endl;
    c1 = s1[0];
    c2 = s2[0];
    s1[0] = c2;
    s2[0] = c1;
    cout << s1 << " " << s2;
}
