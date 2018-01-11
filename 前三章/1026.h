#include<iostream>
using namespace std;
#define CLK_TCK 100.0;
#define HOUR 60*60;
#define MINITE 60;
#define SECOND 1;
int main(){
	int a,b;
	cin>>a>>b;
	if(a>=b||a<0||b>10000000)
		return 0;
	double s=(b-a)/100.0;
	int hour=(int)s/HOUR;
	s-=hour*HOUR;
	int minite=(int)s/MINITE;
	s-=minite*MINITE;
	int second=(int)s/SECOND;
	s-=second*SECOND;
	if(s>=0.5)
		second+=1;
	cout<<hour<<":"<<minite<<":"<<second;
	
	
	return 0;
}
