#include<stdio.h>
int main()
{
	int n,t,i,j,k,m,s[20000000]={0};
	double a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%d",&a,&t);
		for(j=1;j<=t;j++)
		{
			k=j*a;
			s[k]++;
		}
	}
	for(i=1;;i++)
	{
		if(s[i]%2!=0)
		{
			printf("%d",i);
			break;
		}
	}
	
	return 0;
}