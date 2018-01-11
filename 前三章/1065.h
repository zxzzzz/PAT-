#include<iostream>
#include<hash_map>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>50000||n<=0)
		return 0;
	hash_map<string ,string > couple;
	for(int i=0;i<n;i++){
		string  c1,c2;
		cin>>c1>>c2;
		if(c1.size()!=5||c2.size()!=5)
			return ;
		//查找是否存在 c1 c2 
		couple.put(c1,c2);
		couple.put(c2,c1);
	}
	int m;
	cin>>m;
	if(m<=0||m>10000)
		return 0;
	string guest[m];
	int sum=0;
	string fin[m];
	for(int i=0;i<m;i++){
		cin>>guest[i];
		if(guest[i].size!=5)
			return 0;
	}
	
	return 0;
}