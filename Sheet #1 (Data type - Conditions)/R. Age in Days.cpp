#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n = 0, day = 0, month = 0;
    cin >> n;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000);
        cin >> n;
    }
    day = (n % 365) % 30;
    n -= day;
    month = n % 365 / 30;
    n -= month;
    cout << n / 365 << " years\n";
    cout << month << " months\n";
    cout << day << " days";
}
