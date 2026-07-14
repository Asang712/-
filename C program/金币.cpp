#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	scanf("%d",&k);
	j=1,m=1,n=0;
	for(i=1;i<=k;i++)
	{
		n=n+m;
		j++;
		if(j-1==m)
		{
			j=1;
			m++;
		}
	}
	printf("%d",n);
}