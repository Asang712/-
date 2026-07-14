#include<stdio.h>
int main()
{
	int fac(int x);
	int i,j;
	scanf("%d",&i);
	j=fac(i);
	printf("%d",j);
	return 0;
}

int fac(int x)
{
	int f;
    if(x==0||x==1)
	f=1;
	else
	f=fac(x-1)*x;
	return f;
}