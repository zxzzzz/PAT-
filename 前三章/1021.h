#include<iostream>
using namespace std;
int main(){
	string  n;
	cin >>n;
	int l=n.size();
	if(l<=0||l>1000)
		return 0;
	int out[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<l;i++){
		int u=n[i]-'0';
		out[u]++;
	
	}
	for(int i=0;i<10;i++){
		if(out[i]!=0){
			cout<<i<<":"<<out[i];
			}
	}
	return 0;
}