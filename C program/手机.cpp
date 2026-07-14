#include<stdio.h>
#include<string.h>
int main()
{
	char s1[200];
	int i,j;
	gets(s1);
	j=0;
	for(i=0;i<strlen(s1);i++)
	{
		if(s1[i]=='a'||s1[i]=='d'||s1[i]=='g'||s1[i]=='j'||s1[i]=='m'||s1[i]=='p'||s1[i]=='t'||s1[i]=='w'||s1[i]==' ')
		j=j+1;
		if(s1[i]=='b'||s1[i]=='e'||s1[i]=='h'||s1[i]=='k'||s1[i]=='n'||s1[i]=='q'||s1[i]=='u'||s1[i]=='x')
		j=j+2;
		if(s1[i]=='c'||s1[i]=='f'||s1[i]=='i'||s1[i]=='l'||s1[i]=='o'||s1[i]=='r'||s1[i]=='v'||s1[i]=='y')
		j=j+3;
		if(s1[i]=='s'||s1[i]=='z')
		j=j+4;
	}
	printf("%d",j);
	return 0;
}