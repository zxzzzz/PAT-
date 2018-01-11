#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct User{
	int id;
	int score[6],sum;
	int pass;
	bool flag;
}user[10010],tmp;

bool cmp(User a,User b){
	if(a.sum!=b.sum)return a.sum>b.sum;
	else if(a.pass!=b.pass)return a.pass>b.pass;
	else return a.id<b.id;
}
 
int main(){

	int n,k,m;
	int perfect[6];
	scanf("%d%d%d",&n,&k,&m);
	for(int i=1;i<=n;i++){
		user[i].id=i;
		user[i].sum=0;
		user[i].pass=0;
		user[i].flag=false;
		memset(user[i].score,-1,sizeof(user[i].score));
	}
	for(int i=1;i<=k;i++){
		scanf("%d",&perfect[i]);
	}
	for(int i=1;i<=m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(c!=-1&&user[a].flag==false)
			user[a].flag=true;
		 if(c==-1&&user[a].score[b]==-1)
			user[a].score[b]=0;
		if(c==perfect[b]&&user[a].score[b]<perfect[b])
			user[a].pass++;
		 if(c>=0&&user[a].score[b]<c)
			user[a].score[b]=c;			
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(user[i].score[j]!=-1)
				user[i].sum+=user[i].score[j];
		}
	}
	
	sort(user+1,user+n+1,cmp);
	int rank=1;
	for(int i=1;i<=n&&user[i].flag==true;i++){
		if(user[i].sum!=user[i-1].sum)
			rank=i;
		printf("%d %05d %d",rank,user[i].id,user[i].sum);
		for(int j=1;j<=k;j++){
			if(user[i].score[j]==-1)
				printf(" -");
			else printf(" %d",user[i].score[j]);
		}
		printf("\n");
	}

	return 0;
	
}

