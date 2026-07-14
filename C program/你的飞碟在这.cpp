#include<stdio.h>
#include<string.h>
int main() 
{
	int i,m,n;
	char s1[6],s2[6];
	scanf("%s",s1);
	getchar();
	scanf("%s",s2);
	m=1,n=1;
	for(i=0; i<strlen(s1); i++) 
		if(s1[i]>='A'&&s1[i]<='Z')
			m=m*(s1[i]-64);
	for(i=0; i<strlen(s2); i++) 
		if(s2[i]>='A'&&s2[i]<='Z')
			n=n*(s2[i]-64);
	m=m%47,n=n%47;
	if(m==n) printf("GO");
	else printf("STAY");
	return 0;
}