#include<stdio.h>
#include<string.h>
int main()
{
	int b,g,i;
	char s[260];
	gets(s);
	b=g=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y')
		b++;
		if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l')
		g++;
	}
	printf("%d\n%d",b,g);
	return 0;
}