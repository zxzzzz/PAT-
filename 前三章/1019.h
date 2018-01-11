#include<iostream>
using namespace std;
int main(){
	//这里输入的是字符串还是int？
	string in;
	cin>>in;
	if(in.size()<4||in.size)
		return 0;
	while(1){
		int h=hSort(in);
		int m=mSort(in);
		int k=h-m;
		if(k==0)
			cout<<h<<" - "<<m<<" = 0000";
		else
			cout<<h<<" - "<<m<<" = "<<k;
		if(k==6174)
			break;
		in=k;
		
	}
	return 0;
	
}
//升序
int hSort(int n){
	int a[4]={0,0,0,0};
	for(int i=0;i<4;i++){
		a[i]=n%10;
		n/=10;
	}
	
}
//降序
int mSort(int n){
	
}