#include<bits/stdc++.h>
using namespace std;
int main()
{
	string v;
	cin>>v;
	sort(v.begin(),v.end());
	int size = v.size(); 
	for(int i=0;i<size;i++){  
		char c = v[i]; 
		int counter = 1;
		while(v[i] == v[++i]){ 
			counter++; 
		}
		i--;  
		cout<<c<<" : "<<counter<<endl;
	}
	
}
