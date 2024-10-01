#include <bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    long long s;
    cin >> s;
    for (long long i = 0; i < s; i++)
    {
        long long num;
        cin >> num;
        cout << fact(num) << endl;
    }
}
