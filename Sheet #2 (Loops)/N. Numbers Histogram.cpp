#include <bits\stdc++.h>
using namespace std;

int main()
{
    char s = '*';
    cin >> s;
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < x[j]; k++)
        {
            cout << s;
        }
        cout << endl;
    }
}
