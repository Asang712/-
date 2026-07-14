#include<stdio.h>
int a[21];
int n,r;

void solve(int k)
{
	int i;
	if(k>r)
	{
		for(i=1;i<=r;i++)
			printf("%3d",a[i]);
		printf("\n");
		return ;
	}
	for(i=a[k-1]+1;i<=n;i++)
	{
		a[k]=i;
		solve(k+1);
	}
	
}
int main()
{
	scanf("%d%d",&n,&r);
	solve(1);
	return 0;
}
