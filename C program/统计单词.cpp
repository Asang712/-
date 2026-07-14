#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,m,n,t,a[100000];
	char s[10],s1[1000001];
	gets(s);
	getchar();
	gets(s1);
	t=0,m=0,k=0;
	n=strlen[s];
	for(i=0;i<strlen(s1);i++)
	{
		for(j=0;j<n;j++)
		{
			if(s1[i]!=s1[j])
			{
				t=1;
				break;
			}
			if(t==0)
			{
				a[k]==i;
				k++;
				if(s1[i-1]==' '&&s1[i+n]==' ')
				m++;
			}
		}
	}
	if(m>0)
	printf("%d %d",m,a[0]);
	else
	printf("-1");
	return 0;
	
}