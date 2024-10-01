#include <bits\stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int n, m, maxi, mini, res = 0;
        cin >> n >> m;
        maxi = max(n, m);
        mini = min(n, m);
        if (mini > 0)
        {

            for (int i = mini; i <= maxi; i++)
            {

                cout << i << " ";
                res += i;
            }

            cout << "sum =" << res << endl;
        }
        else
        {
            break;
        }
    }
}
