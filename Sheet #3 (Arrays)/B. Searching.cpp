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
    int x;
    cin >> x;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == x)
        {
            res = j;
            break;
        }
        else
        {
            res = -1;
        }
    }
    cout << res << endl;
}
