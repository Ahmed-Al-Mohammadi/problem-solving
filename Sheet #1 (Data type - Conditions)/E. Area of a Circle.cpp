#include <iostream>
#include <iomanip>
using namespace std ;
int main (){
    double r ;
    double pi =  3.141592653;
    cin>>r;
    double s = pi*r*r;
    cout << fixed << setprecision(9) <<s;
}