#include<stdio.h>
#include<string.h>
int main()
{
	int grade[1000][3],sum[1000],i,j,n,k;
	char name[1000][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
		scanf("%d%d%d",&grade[i][0],&grade[i][1],&grade[i][2]);
	}
	for(i=0;i<n;i++)
	{
		sum[i]=grade[i][0]+grade[i][1]+grade[i][2];
	}
	j=0;
	for(i=1;i<n;i++)
	{
		if(sum[j]<sum[i])
		{
			j=i;
		}
	}
	printf("%s %d %d %d",name[j],grade[j][0],grade[j][1],grade[j][2]);
	return 0;
}