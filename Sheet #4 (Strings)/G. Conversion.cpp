#include<bits/stdc++.h>
using namespace std;
int main()
{
	string v; 
	cin>>v;
	for(int i=0;i<v.size();i++){
		if(v[i] == ','){
			cout<<" ";
		} else if (v[i] >= 'a' && v[i] <= 'z') {
			int as = v[i] - 32; 
			char res = as; 
			cout<<res;
		} else {
			int as = v[i] + 32; 
			char res = as; 
			cout<<res;
		}
	}
}
