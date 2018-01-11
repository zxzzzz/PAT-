#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int l=s.size();
	if(l>100000)
		return 0;
	long sum=0;
	for(int i=0;i<l-2;i++){
		if(s[i]!='P'&&s[i]!='A'&&s[i]!='T')
			return 0;
		if(s[i]=='P'){
			for(int j=i+1;j<l-1;j++){
				if(s[j]=='A'){
					for(int k=j+1;k<l;k++){
						if(s[k]=='T'){
							sum++;
						}
					}
				}
			}
		}
	}
	int input=sum%1000000007;
	cout<<input;
	return 0;
}