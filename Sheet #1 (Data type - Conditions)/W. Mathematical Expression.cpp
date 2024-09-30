#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , res;
    char c1 , c2 ;
    cin>>a>>c1>>b>>c2>>res;
    if ((a+b == res)||(a-b == res)||(a*b)==res)
    {
       cout<<"Yes"<<endl;
    }
    else
    {
        if (c1 == '+')
        {
            res = a+b;
            cout<<res;
        }
        else if (c1 == '-'){
            res= a-b;
            cout<<res;
        }
        else
        {
            res = a*b;
            cout<<res;
        }
    }
}
