#include<cstdio>
#include<cstring>
#include<algorithm>
struct Record{
	char id[25];
	int day,hour,min,sec;
	int flag;
}record[1010],input[1000];
 
 bool cmp(Record a,Record b){
		if(a.id!=b.id)	return (strcmp(a.id,b.id))<0;
		else if(a.day!=b.day)	return a.day<b.day;
		else if(a.hour!=b.hour)	return a.hour<b.hour;
		else if(a.min!=b.min)	return a.min<b.min;
		else return a.sec<b.sec;
 }
 
 int main(){
		int charge[24];
		int n;
		for(int i=0;i<24;i++)
			scanf("%d",&charge[i]);
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			char tmp[10];
			scanf("%s %d:%d:%d:%d %s",reco
			
			rd[i].id,&record[i].day,&record[i].hour,&record[i].min,&record[i].sec,&tmp);
			if(tmp=="on-line")
				record[i].flag=1;
			else record[i].flag=0;
		}
		sort(record,record+n,cmp);
		bool flag=true;//on-line
		char t1[20]=record[0].id;
		for(int i=1;i<n;i++){
			if(record[i].flag==1)
				flag
		}
 }
		

