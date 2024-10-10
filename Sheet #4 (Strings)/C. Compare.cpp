#include<bits/stdc++.h>
using namespace std;
int main()
{
	string v1,v2;
	cin>>v1>>v2;
	int size1 = v1.size();
	int size2 = v2.size();
	int size = min(size1,size2);
	int flag = 0;
	for(int i=0;i<size;i++){
		if(v1[i] < v2[i]){
			cout<<v1<<endl;
			flag = 0;
			break;
		} else if (v2[i] < v1[i]){
			cout<<v2<<endl;
			flag = 0;
			break;
		} else {
			flag = -1;
		}
	}
	if(flag == -1){
		if(size1 > size2){
			cout<<v2<<endl;
		} else {
			cout<<v1<<endl;
		}
	}
}
