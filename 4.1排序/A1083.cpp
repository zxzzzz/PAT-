#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct User{
	char name[15];
	char id[15];
	int grade;
}user[100];

bool cmp(User a,User b){
	return a.grade>b.grade;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%s%d",&user[i].name,&user[i].id,&user[i].grade);
	}
	sort(user,user+n,cmp);
	int l,r;
	scanf("%d%d",&l,&r);
	bool flag=false;
	for(int i=0;i<n;i++){
		if(user[i].grade>=l&&user[i].grade<=r){
			flag=true;
			printf("%s %s\n",user[i].name,user[i].id);
		}
	}
	if(!flag)
		printf("NONE");
	return 0;
}
