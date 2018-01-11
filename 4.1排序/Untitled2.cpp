#include<cstring>
#include<cstdio>
int main(){
	char tmp[128];
	bool bad[128]={true};
	char input[100010];
	gets(tmp);
	gets(input);
	int len1=strlen(bad);
	int len2=strlen(input);
	bool flag=true;
	//»µµÄÎªF 
	for(int i=0;i<len1;i++){
		bad[tmp[i]]=false;
		if(tmp[i]=='+')
			flag=false;
	}
	for(int i=0;i<len2;i++){
		char c=input[i];
		if(c>='a'&&c<='z')
			c-=32;
		if(bad[c]==false)
			break;
		else {
			if(input[i]>='A'&&input[i]<='Z'&&flag==false)
				input[i]+=32;
			printf("%c",input[i]);
		}
	}
	return 0;
}
