#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if(n>1000||n<=0||m>500||m<=0)
		return 0;
	int s[n][2];
	double k[n][2];
	for(int i=0;i<n;i++){
		cin>>s[i][0];
		if(s[i][0]<=0)
			return 0;
	}
	for(int i=0;i<n;i++){
		cin>>s[i][1];
		k[i][1]=(double)s[i][1]/(s[i][0]+0.0);
		k[i][0]=i;
		if(s[i][1]<=0)
			return 0;
	}
	k=sort[k];
	double sum=0;
	int index=0;
	while(m){
		if(s[k[index][0]]>m){
			sum+=k[index][1]*m;
			break;
		}
		sum+=k[index][1]*s[k[index][0]][0];
		m-=s[k[index][0]][0];
	}
	cout<<sum;
	return 0;
}
//对单价进行降序排列
int * sort(double j[][]){
	
	
}