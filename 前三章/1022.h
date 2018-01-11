#include<iostream>
#include<cmath>
using namespace std;
int get(int sum,int n);
int main(){
	int a,b,n;
	cin>>a>>b>>n;
	//2^30-1怎么表示？？
	int m=pow(2,30)-1;
	if(a>m||b>m||n<=1||n>10||a<0||b<0)
		return 0;
	int sum1=a+b;
	sum1=get(sum1,n);
	cout<<sum1;
	return 0;
}
//反复除n取余数 
//除基取余法  当为0时倒序输出
int get(int sum,int m){
	int l[32];;
	int index=0;
	while(sum){
		int a=sum%m;
		sum/=m;
		l[index++]=a;
	}
	int sum1=0;
	for(int i=index -1;i>=0;i--){
		sum1=sum1*10+l[i];
	}
	return sum1;;
}