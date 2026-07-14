#include<stdio.h>
int main()
{
	int a[3],i,j,k;
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
    for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(a[j]>a[j+1])
			k=a[j],a[j]=a[j+1],a[j+1]=k;
		}
	}
	for(i=a[2];i>=1;i--)
	{
		if(a[2]%i==0&&a[0]%i==0)
		break;
	}
	a[0]=a[0]/i,a[2]=a[2]/i;
	printf("%d/%d",a[0],a[2]);
	return 0;
}