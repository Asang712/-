#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double f1,f2,f;
	scanf("%d",&n);
	f1=(1+pow(5,0.5))/2;
	f2=(1-pow(5,0.5))/2;
	f=(pow(f1,n)-pow(f2,n))/pow(5,0.5);
	printf("%1.2f",f);
	return 0;
}