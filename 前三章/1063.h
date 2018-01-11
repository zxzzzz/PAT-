#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<=0||n>10000)
		return 0;
	int input[n][2];
	
	int output=0;
	for(int i=0;i<n;i++){
		cin>>input[i][0]>>input[i][1];
		if(input[i][0]>1000||input[i][1]<-1000||input[i][1]<-1000||input[i][1]>1000)
			return 0;
		double sum=pow(input[i][0],2)+pow(input[i][1],2);
		double out=sqrt(sum);
		if(out>output)
			output=out;
		
	}
	//printf()  格式化输出函数
	//sprintf()  格式化输入函数
	if(output*10%1>=0.5)
		output=output+0.01;
	cout<<fixed<<setprecision(2)<<output;
	return 0;
}