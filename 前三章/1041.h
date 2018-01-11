#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<=0||n>1000)
		return 0;
	string s[n+1];
	int id[n+1];
	for(int i=0;i<n;i++){
		s[i]="";
		id[i]=0;
	}
	for(int i=0;i<n;i++){
		string ss;
		int index,uid;
		cin>>ss>>index>>uid;
		if(ss.size()!=14)
			return 0;
		s[index]=ss;
		id[index]=uid;
	}
	int m;
	cin>>m;
	if(m>n)
		return 0;
	int k[m];
	for(int i=0;i<m;i++){
		cin>>k[i];

	}
	for(int i=0;i<m;i++){
		cout<<s[k[i]]<<" "<<id[k[i]]<<endl;
	}
	
	return 0;
}