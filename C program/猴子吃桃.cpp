#include<stdio.h>
int main()
{
	int i,m,n;
	printf("输入天数n=");
	scanf("%d",&n);
	m=1;
	for(i=1;i<n;i++)
	{
		m=2*m+2;
	}
	printf("买了%d个桃子",m);
	return 0;
}