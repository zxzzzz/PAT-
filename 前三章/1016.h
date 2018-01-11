#include <iostream>
using namespace std;
int main(){
	string a,b;
	int da,db;
	cin>>a>>da>>b>>db;
	if(a.size()>10||b.size()>=10||da<=0||da>9||db<=0||db>9)
		return 0;
	int sum1=0;
	int sum2=0;
	for(int i=0;i<a.size();i++){
		if(!isdigit(a[i])){
			return 0;
		}
		if(i==0&&a[i]=='0'){
				return 0;
		}
		if(a[i]-'0'==da){
			sum1=sum1*10+da;
		}
		}
	for(int i=0;i<b.size();i++){
		if(!isdigit(b[i])){
			return 0;
		}
		if(i==0&&b[i]=='0'){
				return 0;
		}
		if(b[i]-'0'==db){
			sum2=db+sum2*10;
		}
	}
	int sum=sum1+sum2;
	cout<<sum;
	return 0;
}