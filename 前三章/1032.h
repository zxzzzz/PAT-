#include<iostream>
using namespace std;
int main(){
	int n,m,d;
	cin>>n;
	if(n<=0||n>100000)
		return 0;
	//数组初始化可以这样： input[n]={0}
	int input[n]={0};
	int max[2]={0};
	for(int i=0;i<n;i++){
		cin>>m>>d;
		if(m<1||d<0||d>100)
			return 0;
		input[m]+=d;
	}
	bool flag=false;
	for(int i=1;i<n;i++){
		if(input[i]==0){
			flag=true;
			continue;
		}
		if(flag&&input[i]!=0)
			return 0;
		if(input[m]>max[1]){
			max[1]=input[m];
			max[0]=m;
		}
	}
	cout<<max[0]<<" "<<max[1];
	return 0;
}