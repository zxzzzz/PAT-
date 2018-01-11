#include<cstring> 
#include<cstdio>

int main(){
	char str1[100],str2[100];
	bool hash[128]={false};
	gets(str1);
	gets(str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
	for(int i=0;i<len1;i++){
		int j;
		char c1,c2;
		c1=str1[i];
		if(c1>='a'&&c1<='z')
			c1-=32;
		for(j=0;j<len2;j++){
			c2=str2[j];
			if(c2>='a'&&c2<='z')
				c2-=32;
			if(c1==c2)
				break;
		}
		if(j==len2&&hash[c1]==false)
		{
			printf("%c",c1);
			hash[c1]=true;
			}
	}
	return 0;
}
