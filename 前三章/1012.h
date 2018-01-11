// 给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

// A1 = 能被5整除的数字中所有偶数的和；
// A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
// A3 = 被5除后余2的数字的个数；
// A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
// A5 = 被5除后余4的数字中最大数字。
// 输入格式：

// 每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。

// 输出格式：

// 对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

// 若其中某一类数字不存在，则在相应位置输出“N”。

// 输入样例1：
// 13 1 2 3 4 5 6 7 8 9 10 20 16 18
// 输出样例1：
// 30 11 2 9.7 9
// 输入样例2：
// 8 1 2 4 5 6 7 9 16
// 输出样例2：
// N 11 2 N 9
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>1000)
		return 0;
	//int *input=new int[n]   VC6.0  必须这样..........
	int input[n];
	int sum[5]={0,0,0,0,0};
	bool flag=false;
	bool f[5]={	false,false,false,false,false};
	int flag3=0;

	for(int i=0;i<n;i++){
		cin>>input[i];
		if(input[i]>1000)
			return 0;
		int m=input[i]%5;
		switch(m){
			case 0:
				if(input[i]%2==0){
					sum[0]+=input[i];
					f[0]=true;
				}
			break;
			case 1:
				if(!flag){
					sum[1]+=input[i];
					//bool 不能直接做 取反运算？？
					flag=true;
				}
				else {
					sum[1]-=input[i];
					flag=false;
				}
				f[1]=true;
			break;
			case 2:
				sum[2]++;
				f[2]=true;
			break;
			case 3:
				sum[3]+=input[i];
				flag3++;
				f[3]=true;
			break;
			case 4:
				if(input[i]>sum[4])
					sum[4]=input[i];
				f[4]=true;
			break;
			
		}
	
		
	}
	for(int w=0;w<5;w++){
		if(w==0){
			if(!f[w]){
				cout<<"N";
			}
			else{
				cout<<sum[w];
			}
			continue;
		}
		if(w==3){
			if(!f[w]){
				cout<<" "<<"N";
			}else{
				//int 与 int 相除得到的还是int
				//setprecision(n)  精度为n位
				//cout<<finxed<<setprecision(n) 精度为小数点后n位
					double k=(double)sum[3]/(flag3+0.0);
				  cout << " "<<fixed << setprecision(1)<<k;
			}
			continue;
		}
		if(!f[w])
			cout<<" "<<"N";
		else
			cout<<" "<<sum[w];
	}
	return 0;
}
