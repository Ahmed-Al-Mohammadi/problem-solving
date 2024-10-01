#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    long long a[x];
    for (long long i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    sort(a, a + x);
    cout << a[x - 1];
}