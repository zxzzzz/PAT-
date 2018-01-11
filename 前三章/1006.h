#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>999)
		return -1;
	int b[3];//个 十 百
	int c=0;
	char p[3]={'1','S','B'};
	while(n!=0){
		b[c++]=n%10;
		n=n/10;
	}
	for(int i=c-1;i>=0;i--){
		for(int j=b[i];j>0;j--){
			cout<<p[i];
			}
		}
	cout<<n;
	
	return 0;
}