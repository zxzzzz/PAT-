#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct Info{
	char id[10];
	int de,cai,sum;
	int flag;
}info[100010];
bool cmp(Info a,Info b){
	if(a.flag!=b.flag)return a.flag<b.flag;
	else if(a.sum!=b.sum)return a.sum>b.sum;
	else if(a.de!=b.de)return a.de>b.de;
	else return (strcmp(a.id,b.id))<0;
}
int main(){
	int n,L,H;
	scanf("%d%d%d",&n,&L,&H);
	int m=n;
	for(int i=0;i<n;i++){
		int de,cai;
		scanf("%s%d%d",info[i].id,&info[i].de,&info[i].cai);
		info[i].sum=info[i].de+info[i].cai;
			if(info[i].de<L||info[i].cai<L){
				m--;
				info[i].flag=5;
			}
			else if(info[i].de>=H&&info[i].cai>=H)
					info[i].flag=1;
			else if(info[i].de>=H&&info[i].cai<H)
					info[i].flag=2;
			else if(info[i].de>=info[i].cai)
					info[i].flag=3;
			else 	info[i].flag=4;
			
	}
	sort(info,info+n,cmp);
	printf("%d\n",m);
	for(int i=0;i<m;i++){
		printf("%s %d %d\n",info[i].id,info[i].de,info[i].cai);
	}
	return 0;
}
