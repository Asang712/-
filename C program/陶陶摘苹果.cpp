#include<stdio.h>
int main()
{
	int a[10],i,j,k;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	scanf("%d",&j);
	k=0;
	for(i=0;i<10;i++)
	{
		if(j+30>=a[i])
		k++;
	}
	printf("%d",k);
	return 0;
}