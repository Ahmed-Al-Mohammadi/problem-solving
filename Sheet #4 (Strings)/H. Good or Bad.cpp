#include<bits/stdc++.h>
using namespace std;
int main()
{
	int words;
	cin>>words;
	while(words--){
		string word;   
		cin>>word; 
		int size = word.size();
		int flag = 0;
		for(int i=0;i<size-2;i++){ 
			if((word[i] == '0' && word[i+1] == '1' && word[i+2] == '0') ||
			(word[i] == '1' && word[i+1] == '0' && word[i+2] == '1')){	
				flag = 1;
				break;
			} 
		}
		if(flag == 1){
			cout<<"Good"<<endl;
		} else {
			cout<<"Bad"<<endl;
		}
	}
	
}
