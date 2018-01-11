#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct User{
	int id;
	int ge,gi,ave;
	int app[5];
	int pass;
	int rank;
}user[40010];

struct School{
	int num;
	int count;
	int join[40010];
	int last;
}sch[110];

bool cmp(User a,User b){
	if(a.ave!=b.ave)return a.ave>b.ave;
	else if(a.ge!=b.ge)return a.ge>b.ge;
	else return a.id<b.id;
}
bool cmp1(int a,int b){
	return sch[a].id<sch[b].id;
}

int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=0;i<m;i++)
			scanf("%d",&sch[i].num);
	for(int i=0;i<m;i++)
		sch[i].count=0;	
	for(int i=0;i<n;i++){
		scanf("%d%d%",&user[i].ge,&user[i].gi);
		for(int j=0;j<k;j++)
			scanf("%d",&user[i].app[j]);
		user[i].id=i;
		user[i].ave=(user[i].ge+user[i].gi)/2;
	}
	sort(user,user+n,cmp);
	user[0].rank=0;
	for(int i=1;i<n;i++){
		if(user[i].ave==user[i-1].ave&&user[i].ge==user[i-1].ge)
			user[i].rank=user[i-1].rank;
		else 
			user[i].rank=i;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			int tmp=user[i].app[j];
			if(sch[tmp].num>0){
				sch[tmp].num--;
				sch[tmp].join[sch[tmp].count++]=user[i].id;
				user[i].pass=tmp;
				if(sch[tmp].num==0)
					sch[tmp].last=user[i].rank;
			}
			else if(sch[tmp].num<=0&&sch[tmp].last==user[i].rank){
				sch[tmp].join[sch[tmp].count++]=user[i].id;
				user[i].pass=tmp;
			}
				
		}
	}
	for(int i=0;i<m;i++){
		if(sch[i].count==0)
			printf("\n");
		else{
			sort(sch[i].join,sch[i].join+sch[i].count,cmp1);
			for(int j=0;j<sch[i].count;j++)
				printf("%d",sch[i].join[j]);
			printf("\n");
		}
	} 
	return 0;
}
