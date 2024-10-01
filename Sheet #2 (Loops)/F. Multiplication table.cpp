#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r = 1;
    cin >> n;

    while (r <= 12)
    {
        cout << n << " * " << r << " = " << r * n << endl;
        r++;
    }
}