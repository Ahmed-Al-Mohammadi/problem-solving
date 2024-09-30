#include <bits/stdc++.h>
using namespace std ;
int main (){
    long long a , b ,d , c ;
    cin >> a >> b >> d >> c;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    int res = a*b*c*d;
    if ( res % 100 <= 9)cout <<0;
    cout <<res%100;
}