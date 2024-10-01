#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j <= i; j = ++j)
        {
            cout << '*';
        }
        cout << endl;
    }
}
