#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	if(s.size()>10000)
		return 0;
	// stack <char>P;
	// stack <char>A;
	// stack <char>T;
	// stack <char>e;
	// stack <char>s;
	// stack <char>t;
	int h[6];
	for(int i=0;i<6;i++)
		h[i]=0;
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])){
			switch(s[i]){
				case 'P':
					h[0]++;
					break;
				case 'A':
					h[1]++;
					break;
				case 'T':
					h[2]++;
					break;
				case 'e':
					h[3]++;
					break;
				case 's':
					h[4]++;
					break;
				case 't':
					h[5]++;
					break;
				default:
					break;
			}
			
		}else{
			return 0;
		}
	}
	bool flag1=false;
	while(1){
		if(h[0]!=0){
			cout<<'P';
			h[0]--;
			flag1=true;
		}
		if(h[1]!=0){
			cout<<'A';
			h[1]--;
			flag1=true;
		}
		if(h[2]!=0){
			cout<<'T';
			h[2]--;
			flag1=true;
		}
		if(h[3]!=0){
			cout<<'e';
			h[3]--;
			flag1=true;
		}
		if(h[4]!=0){
			cout<<'s';
			h[4]--;
			flag1=true;
		}
		if(h[5]!=0){
			cout<<'t';
			h[5]--;
			flag1=true;
		}
		if(!flag1)
			break;
		flag1=false;
	}
	return 0;
}