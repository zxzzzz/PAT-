#include<iostream>
using namespace std;
int main(){
	int n;
	char m;
	cin>>n>>m;
	if(n<=0||n>1000)
		return 0;
	int index=0;
	int cur=0;
	int pre=0;
	while(1){
		cur=pre;
		pre=2*(3*(index+1)+(index+1)*(index))+1;
		if(n==cur)
			break;
		if(cur<n&&pre>n)
			break;
		index++;
	}
	cout<<index<<endl;
	for(int i=index;i>0;i--){
		int empty=index-i;
		cout<<empty<<endl;
		for(int o=0;o<empty;o++){
			cout<<" ";
		}
		for(int j=0;j<2*i-1;j++){
			cout<<m;
		}
			for(int x=0;x<empty;x++){
			cout<<" ";
		}
		cout<<endl;
	}
	index+=1;
	for(int u=2;u<=index;u++){
		int empty=index-i;
		for(int w=0;w<empty;w++){
			cout<<" ";
		}
		for(int p=0;p<2*i-1;p++){
			cout<<m;
		}
		for(int v=0;v<empty;v++){
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}