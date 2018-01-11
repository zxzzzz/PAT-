#include<iostream>
// using namespace std;
// unsigned   int   0～4294967295   
// int   2147483648～2147483647 
// unsigned long 0～4294967295
// long   2147483648～2147483647
// long long的最大值：9223372036854775807
// long long的最小值：-9223372036854775808
// unsigned long long的最大值：1844674407370955161

// __int64的最大值：9223372036854775807
// __int64的最小值：-9223372036854775808
// unsigned __int64的最大值：18446744073709551615
int main(){
	int n[10];
	int sum=0;
	bool flag2=false;
	for(int i=0;i<10;i++){
		cin>>n[i];
		if(n[i]<0)
			return 0;
		if(i!=0&&n[i]!=0)
			flag2=true;
		sum+=n[i];
		if(sum>50)
			return 0;
	}
	if(!flag2)
		return 0;
	int t=0;
	bool flag=false;
	for(int i=0;i<10;i++){
		if(n[i]==0)
			continue;
		if(!flag&&i!=0){
			flag=true;
			t=i;
			n[i]-=1;
		    while(n[0]){
					t*=10;
					n[0]--;
			}
			
			
		}
		while(n[i]){
			t=t*10+i;
			n[i]--;
		}
	}
	cout<<t;
	return 0;
}