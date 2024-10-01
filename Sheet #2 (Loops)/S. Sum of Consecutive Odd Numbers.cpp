#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, maxi, mini, res = 0;
        cin >> n >> m;
        maxi = max(n, m);
        mini = min(n, m);

        for (int j = mini + 1; j < maxi; j++)
        {
            if (j % 2 != 0)
            {
                res += j;
            }
        }

        cout << res << endl;
    }
}