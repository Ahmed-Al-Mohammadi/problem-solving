#include <bits/stdc++.h>
using namespace std ;
int main (){
    char c ;
    cin>>c ;
    if ((c >= 65 && c <= 90)||(c >= 97 && c <= 122))
    {
        cout<<"ALPHA"<<endl;
    }
    if (c >= 48 && c <= 57){
        cout<<"IS DIGIT"<<endl;
    }
    if(c >= 65 && c <= 90 ){
        cout<<"IS CAPITAL"<<endl;
    }
    if (c >= 97 && c <= 122)
    {
        cout<<"IS SMALL"<<endl;
    }
}
