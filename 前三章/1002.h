#include<iostream>
#include<cstring>
using namespace	std;

int main(){
	string pin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string n;
	cin>>n;
	int l=n.size();
	if(l>100){
		return 0;
	}
	int sum=0;
	for(int i=0;i<l;i++){
		sum+=n[i]-48;
	}
	int flag=0;
	int v[l];
	for(int i=0;i<l;i++)
		v[i]=0;
	while(sum){
		v[flag++]=sum%10;
		sum/=10;
	}
	for(int i=flag-1;i>=0;i--){
		if(i==flag-1){
			cout<<pin[v[i]];
			continue;
		}
		cout<<" "<<pin[v[i]];
		
	}
	
	return 0;
}