#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct Score{
	int  id;
	int grade[4];
}score[2010];

int now;
char course[4]={'A','C','M','E'};
int rank1[1000000][4]={0};

bool cmp(Score a,Score b){
	return a.grade[now]>b.grade[now];
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",&score[i].id,&score[i].grade[1],&score[i].grade[2],&score[i].grade[3]);
		score[i].grade[0]=(score[i].grade[1]+score[i].grade[2]+score[i].grade[3])/3;
	}
	
	for(now=0;now<4;now++){
		sort(score,score+n,cmp);
		rank1[score[0].id][now]=1;
		for(int i=1;i<n;i++){
			if(score[i].grade[now]==score[i-1].grade[now])
				rank1[score[i].id][now]=rank1[score[i-1].id][now];
			else 
				rank1[score[i].id][now]=i+1;
		}
	}
	int query;
	for(int i=0;i<m;i++){
		scanf("%d",&query);
		if(rank1[query][0]==0)
			printf("N/A\n");
		else {
			int min=0;
			for(int j=0;j<4;j++){
				if(rank1[query][j]<rank1[query][min]){
					min=j;
				}
			}
			printf("%d %c\n",rank1[query][min],course[min]);
		}
	}
	
	return 0;	
}
