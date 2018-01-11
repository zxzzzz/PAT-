#include<iostream>
using namespace	std;
int win(char a,char b);
int main(){
	int n;
	cin>>n;
	if(n<=0||n>100000)
		return 0;
	char input[n][2];
	int out[3]={0,0,0};
	for(int i=0;i<n;i++){
		cin>>intput[i][0]>>input[i][1];
		if((input[i][0]!='C'&&input[i][0]!='J'&&input[i][0]!='B')||(input[i][1]!='C'&&input[i][1]!='J'&&input[i][1]!='B'))
			return 0;
		int v=win(input[i][0],input[i][1]);
		switch(v){
			case 0:
				s1++;
				int m=get(input)more[0][]
				
		}
	}
	int s1,p1,f1,s2,p2,f2;
	s1=0;
	p1=0;
	f1=0;
	s2=0;
	p2=0;
	f2=0;
	int more[2][3]={{0,0,0},{0,0,0}};
	
	return 0;
}
int get(char a){
	switch(a){
		case 'C':
		return 0;
		case 'J':
		return 1;
		case 'B':
		return 2;
	}
}
//a win true 
int  win(char a,char b){
	if((a=='B'&&b=='C')||(a=='C'&&b=='J')||(a=='J'&&b=='B'))
		return 0;
	else if((b=='B'&&a=='C')||(b=='C'&&a=='J')||(b=='J'&&a=='B'))
		return 1;
	else 
		return 2;
		
	
}