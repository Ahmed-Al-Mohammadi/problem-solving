#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value; 
	cin>>value;   
	int size = value.size();
	int e=0,g=0,y=0,p=0,t=0;
	for(int i=0;i<size;i++){
		if(value[i] == 'e' || value[i] == 'E'){
			e++;
		} else if(value[i] == 'g' || value[i] == 'G'){
			g++;
		}else if(value[i] == 'y' || value[i] == 'Y'){
			y++;
		}else if(value[i] == 'p' || value[i] == 'P'){
			p++;
		}else if(value[i] == 't' || value[i] == 'T'){
			t++;
		}
	}
	
	int min1 = min(e,g); 
	int min2 = min(y,p);   
	int min3 = min(min1,min2);
	cout<<min(min3,t);
	
}
