#include<stdio.h>
int main()
{
	int m,n,i,j,s,a[100][100];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	s=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==m-1||j==n-1)
			s=s+a[i][j];
		}
	}
	printf("%d",s);
	return 0;
}