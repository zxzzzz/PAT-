// 令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。

// 输入格式：

// 输入在一行中给出M和N，其间以空格分隔。

// 输出格式：

// 输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

// 输入样例：
// 5 27
// 输出样例：
// 11 13 17 19 23 29 31 37 41 43
// 47 53 59 61 67 71 73 79 83 89
// 97 101 103

#include<iostream>
#include<cmath>
using namespace std;
bool is(int n);

int main(){
	int n,m;
	cin>>n>>m;
	if(m<n||m>10000)
		return 0;
	int total=0;
	//变量定义后必须初始化
	// 不带初始化的定义：带有静态存储持续时间的变量会被隐式初始化为 NULL（所有字节的值都是 0），其他所有变量的初始值是未定义的。
	int s=1;
	int index=0;
	int *u=new int[m-n+1];
	while(1){
		if(is(s)){
			total++;
			if(total>=n&&total<=m){
				u[index++]=s;
			}
			if(total>m)
				break;
		}
		s++;
	}
	for(int i=0;i<index;i++){
		//每十个为一行  i%10 ==9  9 19 29 39.....
		if(i%10==9){
			cout<<u[i]<<endl;
			continue;
		}
			if(i==index-1){
				cout<<u[i];
				continue;
			}
		cout<<u[i]<<" ";
		
	}

	
	return 0;
}

bool is(int n){
	if(n==0||n==1)
		return false;
	for(int i=2;i<=sqrt(n);i++){
		//浮点错误  0做了除数
		if(n%i==0)
			return false;
	}
	return true;
}