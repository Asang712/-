#include<stdio.h>
int main()
{
	int h,r,n;
	float Pi=3.14;
	scanf("%d %d",&h,&r);
	n=20000/(h*Pi*r*r);
	printf("%d",n+1);
	return 0;
}