#include <stdio.h>
int main()
{
	int a[1001]={1,1},i,j,s=0,n;
	scanf("%d",&n);
	for(i=2;i<=45;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	printf("%d\n",a[n]);
	return 0;
}