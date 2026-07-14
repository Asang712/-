#include<stdio.h>
int main()
{
	int i,j,k,n,m,a[5000],min;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	k=0,min=1000001;
	for(i=0;i<=n-m;i++)
	{
		for(j=i;j<i+m;j++)
		{
			k=k+a[j];
		}
		if(k<min) min=k;
		k=0;
	}
	printf("%d",min);
	return 0;
}