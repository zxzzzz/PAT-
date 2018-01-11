#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n<=0||n>100)
    return 0;
  int a[n][2];
  int b[n][2];
  int ta=0;
  int tb=0;
  for(int i=0;i<n;i++){
    cin>>a[i][0]>>a[i][1]>>b[i][0]>>b[i][1];
      if(a[i][0]>100||a[i][1]>100||b[i][0]>100||b[i][1]>100||a[i][0]<=0||a[i][1]<=0||b[i][0]<=0||b[i][1]<=0)
          return 0;
      int sum=a[i][0]+b[i][0];
    if(a[i][1]==sum&&b[i][1]!=sum){
      tb++;
    }
      if(a[i][1]!=sum&&b[i][1]==sum)
          ta++;
    }
  cout<<ta<<" "<<tb;
return 0;}