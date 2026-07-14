#include<stdio.h>
#include<string.h>
int main()
{
	char s[4][200];
	int i,j,k,m,n,a[26]={0};
    for(i=0;i<4;i++)
    {
    	gets(s[i]);
		for(j=0;j<strlen(s[i]);j++)
		    a[s[i][j]-65]++;
	}
	int max=0;
	for(i=0;i<26;i++)
	    if(a[i]>max)
	       max=a[i];
	m=max;
	for(i=0;i<max;i++)
	{
		for(j=0;j<26;j++)
		{
			if(a[j]>=m) printf("*");
			else printf(" ");
			if(j<25)
			printf(" ");
		}
		m--;
		printf("\n");
	}
	printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
	return 0;
}