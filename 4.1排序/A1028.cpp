#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct Stu{
	char id[10];
	char name[10];
	int grade;
}stu[100010];

int now;
bool cmp(Stu a,Stu b){
	if(now==1){
		return (strcmp(a.id,b.id))<0;
	}else if(now==2){
		if(strcmp(a.name,b.name)!=0)	return (strcmp(a.name,b.name))<0;
		else 	return (strcmp(a.id,b.id))<0;
	}else {
		if(a.grade!=b.grade)	return a.grade<b.grade;
		else 	return (strcmp(a.id,b.id))<0;
	}
}

int main()
{
	int n;
	scanf("%d %d",&n,&now);
	for(int i=0;i<n;i++){
		scanf("%s%s%d",stu[i].id,stu[i].name,&stu[i].grade);
		
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<n;i++){
		printf("%s %s %d\n",stu[i].id,stu[i].name,stu[i].grade);
	}
	
	return 0;
	
	
}
