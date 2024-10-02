#include <bits\stdc++.h>
using namespace std;

int main()
{
    long long n, res = 0;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        res += a[j];
    }
    if (res < 0)
    {
        res = res * -1;
        cout << res << endl;
    }
    else
    {
        cout << res << endl;
    }
}
