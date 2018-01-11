#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >>n;
	if(n<=0||n>100000)
		return 0;
	int m[n];
	for(int i=0;i<n;i++){
		cin>>m[i];
		if(m[i]>1000000000){
			return 0;
		}
	}
	int h[n];
	int index=0;
	int sum=0;
	for(int i=0;i<n;i++){
		int a=m[i];
		int j=0;
		int k=0;
		if(i==0){
			int g=0;
			for(g=1;g<n;g++){
				if(a>m[g]){
					break;
				}
			}
			if(g==n-1){
				sum++;
				h[index++]=a;
			}
			continue;
		}
		if(i==n-1){
			int g=0;
			for(g=0;g<n-2;g++){
				if(a<m[g]){
					break;
				}
			}
			if(g==n-2){
				sum++;
				h[index++]=a;
			}
			continue;
		}
		for( j=0;j<i;j++){
			if(a<m[j]){
				break;
			}
		}
		for(k=i+1;k<n;k++){
			if(a>m[k])
				break;
		}
		if(j==i-1&&k==n-1){
			sum++;
			h[index++]=a;
		}
	}
	sort(h,h+index-1);
	cout<<sum<<endl;
	for(int i=0;i<index;i++){
		if(i==0){
			cout<<h[i];
			continue;
		}
		cout<<" "<<h[i];
	}
	return 0;
}