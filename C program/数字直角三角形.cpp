#include<stdio.h>
int main()
{
	int n,i,j,k,a[1000];
	scanf("%d",&n);
	j=0;
	for(i=0;n>=1;i++)
	{
		j++;
		if(i+1<=9)
		printf("0%d",i+1);
		if(i+1>9)
		printf("%d",i+1);
		if(j==n)
		{
			j=0;
			n--;
			printf("\n");
		}
	}
	return 0;
}