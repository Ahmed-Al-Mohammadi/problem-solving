#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x == 1)
    {
        cout << -1 << endl;
    }
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}