#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
	string input;
	cin>>input;
	cout<<endl;
	int l=input.size();
	int flag=false;
	if(l>1000)
		return 0;
	int out[26];
	for(int i=0;i<26;i++){
		out[i]=0;
	}
	for(int i=0;i<l;i++){
		if(isalpha(input[i])){
			flag=true;
			//转换为小写字母  tolower()
			if(input[i]>='A'&&input[i]<='Z'){
				int index=input[i]-'A';
				out[index]++;
			}else {
				int index=input[i]-'a';
				out[index]++;
			}
			
		}
	}
	if(!flag)
		return 0;
	//0 下标 1 次数
	int max[2];
	for(int i=0;i<2;i++)
		max[i]=0;
	for(int i=0;i<26;i++){
		if(out[i]>=max[1]){
			if(max[1]==out[i]){
				if(max[0]<i){
					continue;
				}
				
			}
			max[0]=i;
			max[1]=out[i];
		}
	}
	char c='a'+max[0];
	cout<<c<<" "<<max[1];
	
	return 0;
}