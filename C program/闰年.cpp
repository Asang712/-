#include<stdio.h>
int main()
{
	int x,y,z,i;
	scanf("%d%d",&x,&y);
	i=0;
	for(z=x;z<=y;z++)
	{
		if((z%4==0&&z%100!=0)||z%400==0)
		i++;
	}
	printf("%d\n",i);
	for(z=x;z<=y;z++)
	{
		if((z%4==0&&z%100!=0)||z%400==0)
		printf("%d ",z);
	}
	return 0;
}