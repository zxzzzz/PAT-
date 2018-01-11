#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct Info{
	char name[10];
	int age,worth;
}info[100010];
//根据年龄递增 
bool cmp1(Info a,Info b){
	 return a.age<=b.age;
}
bool cmp2(Info a,Info b){
	if(a.worth!=b.worth)return a.worth>b.worth;
	else if(a.age!=b.age)return a.age<b.age;
	else return (strcmp(a.name,b.name))<0;
}

int main(){
	int n,m;
	for(int i=0;i<n;i++){
		scanf("%s %d%d",info[i].name,&info[i].age,&info[i].worth);
	}
	sort(info,info+n,cmp1);
	int k,min,max;
	int count=0;
	int left=0,right=0;
	bool flag1=false;
	bool flag2=false;
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&k,&min,&max);
		count=0;
		for(int j=0;j<n;j++){
			left=0;
			right=0;
			if(!flag1&&info[i].age>=min){
				left=j;
				flag1=true;
			}
			if(!flag2&&info[i].age>max){
				right=j;
				flag2=false;
				break;
			}
			if(left==0){
				printf("None\n");
				continue;
			}
		}
			sort(info+left,info+right,cmp2);
			for(int g=right;g<left;g++){
				printf("Case #%d:\n",i);
				printf("%s %d %d\n",info[g].name,info[g].age,info[g].worth);
		}
	
}
	return 0;
}

