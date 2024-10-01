#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i != n + 1)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
        i++;
    }
}