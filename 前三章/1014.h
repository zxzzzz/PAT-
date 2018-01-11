// 大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是第4个字母'D'，代表星期四；第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、以及大写字母A到N表示）；后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。

// 输入格式：

// 输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。

// 输出格式：

// 在一行中输出约会的时间，格式为“DAY HH:MM”，其中“DAY”是某星期的3字符缩写，即MON表示星期一，TUE表示星期二，WED表示星期三，THU表示星期四，FRI表示星期五，SAT表示星期六，SUN表示星期日。题目输入保证每个测试存在唯一解。

// 输入样例：
// 3485djDkxh4hhGE 
// 2984akDfkkkkggEdsb 
// s&hgsfdk 
// d&Hyscvnm
// 输出样例：
// THU 14:04

#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a.size()>60||b.size()>60||c.size()>60||d.size()>60)
		return 0;
	int index=0;
	string day;
	string days[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int hour;
	bool flag=false;
	int l=a.length()>b.length()?b.length():a.length();
	for(int i=0;i<l;i++){
		if(!flag&&a[i]==b[i]&&(a[i]>='A'&&a[i]<='G'))
		{
			int g=a[i]-'A';
			day=days[g];
			cout<<day<<" ";
			flag=true;
			continue;
		}
		if(flag&&a[i]==b[i]&&((a[i]>='A'&&a[i]<='N')||isdigit(a[i])))
		{
			//函数isalpha()判断是否为字母
			//isdigital()判断是否为数字
			//char类型相减返回int 
			// a 97| A 65| 0 48
			//下标可以与行为对应起来的用数组  用switch的话太慢
			//判断一个数为个位数 前面加零 :cout<<index/10<<index%10;
			if(isdigit(a[i]))
			{
				hour=a[i]-'0';
				cout<<"0"<<hour<<":";
				break;
			}
			hour=a[i]-'A'+10;
			cout<<hour<<":";
			break;
		
		}
	}
	index=0;
	int l2=c.length()>d.length()?d.length():c.length();
	while(index<l2){
		if(c[index]==d[index]&&isalpha(c[index]))
		{
				cout<<index/10<<index%10;
				
				break;
		}
		index++;
		}
	

	
	return 0;
}

