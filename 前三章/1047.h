#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
		int d;
		char c;
		int f;
		int score;
	if(n<=0||n>10000)
		return 0;
	int m[1000];
	//数组初始化出错   i<1000 
	for(int o=0;o<1000;o++)
		m[o]=0;
	for(int i=0;i<n;i++){
	
			
		cin>>d>>c>>f>>score;
	
		if(d<1||d>1000||c!='-'||f<0||f>10||score<0||score>100)
			return 0;
		m[d]+=score;
	}
	
	int max[]={0,0};
	for(int t=0;t<1000;t++)
	{
		if(m[t]>max[1]){
			max[0]=t;
			max[1]=m[t];
		}
	}
	cout<<max[0]<<" "<<max[1];
	return 0;
}