#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, even = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int item ;
        cin >> item;
        if (item % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
        if (item > 0)
        {
            pos += 1;
        }
        else if (item < 0)
        {
            neg += 1;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
}