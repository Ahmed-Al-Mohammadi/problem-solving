#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc; 
	while(tc--){ 
		string v1,v2;
		cin>>v1>>v2; 

		int size = v1.size() + v2.size();
		int flag1 = 1,flag2 = 1;
		for(int i=0;i<size;i++){ 
			if(v1.size() != i && flag1){   
				cout<<v1[i];
			} else {
				flag1 = 0;
			}
			if(v2.size() != i && flag2){ 
				cout<<v2[i];
			} else {
				flag2 = 0;
			}	
		}
		cout<<endl;
	}
}
