#include<stdio.h>
int main()
{
	int a,b,c;
	float d,n;
	scanf("%f",&n);
	a=n/100;
	b=(n-a*100)/10;
	c=n-a*100-b*10;
	d=n-a*100-b*10-c;
	n=d*10+c*0.1+b*0.01+a*0.001;
	printf("%1.3f",n);
	return 0;
} 
