#include<stdio.h>
int main()
{
	int a[7][2],b[7]={0},i,j,k;
	for(i=0;i<7;i++)
	{
	    scanf("%d%d",&a[i][0],&a[i][1]);
    }
	for(i=0;i<7;i++)
	{
		if(a[i][0]+a[i][1]>8) b[i]=a[i][0]+a[i][1];
	}
	k=b[0],j=0;
	for(i=1;i<7;i++)
	{
		if(b[i]>k)
		k=b[i],j=i+1;
	}
	printf("%d",j);
	return 0;
}