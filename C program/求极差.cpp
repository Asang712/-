#include<stdio.h>
int main()
{
	int i,j,k,n,a[100],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=1;j<n;j++)
		{
			if(a[k]>a[j])
			k=j;
		}
		t=a[k],a[k]=a[i],a[i]=t;
	}
	printf("%d",a[n-1]-a[0]);
	return 0;
}