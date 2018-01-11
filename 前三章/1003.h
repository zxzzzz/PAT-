#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	string info[n][2];
	int score[n];
	for(int i=0;i<n;i++){
		cin>>info[i][0]>>info[i][1]>>score[i];
		if(info[i][0].size()<=10&&info[i][1].size()<=10&&score[i]>=0&&score[i]<=100)
			continue;
		else
			return -1;
		cout<<endl;
	}
	//排序

		int min=score[0];
		int max=score[0];
	
	int indexMin=0;
	int indexMax=0;
	for(int i=1;i<n;i++){
		
		if(score[i]>max){
			max=score[i];
			indexMax=i;
		}
		if(score[i]<min){
			min=score[i];
			indexMin=i;
		}
		
	}
	cout<<info[indexMax][0]<<" "<<info[indexMax][1]<<endl;
	cout<<info[indexMin][0]<<" "<<info[indexMin][1]<<endl;
	return 0;
	
}