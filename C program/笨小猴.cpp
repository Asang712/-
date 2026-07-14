#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[100];
	int i,j,k,m,n,t,b[26],a[26]={0};
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		k=s[i]-96;
		a[k]++;
	}
	j=0;
	for(i=0;i<26;i++)
	{
		if(a[i]>0)
		{
			b[j]=a[i];
			j++;
		}
	}
	m=j;
	for(i=0;i<m-1;i++)
	{
		k=i;
		for(j=i+1;j<m;j++)
		{
			if(b[k]>b[j])
			k=j;
		}
		if(k!=i)
		{
			t=b[k];
			b[k]=b[i];
			b[i]=t;
		}
	}
	n=b[m-1]-b[0];
	if(n<2)
	printf("No Answer\n0");
	if(n==2)
	printf("Lucky Word\n2");
	if(n>2)
	{
		j=0;
		for(i=2;i<sqrt(n);i++)
		{
			if(n%i==0)
			{
				printf("No Answer\n0");
				j=1;
				break;
			}
		}
		if(j==0)
		printf("Lucky Word\n%d",n);
	}
	return 0;
}