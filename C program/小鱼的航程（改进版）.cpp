#include<stdio.h>
int main()
{
	int x,n,i,j,k,m;
	scanf("%d%d",&x,&n);
	i=5-x+1;//第一周游的天数
	if(i<0) i=0;//6，7不计入
	n=n-(7-x+1);//剩余天数
	j=n/7;//共有几周
	k=n%7;//凑不够一周的
	if(k==6)
	k=5;
	m=(i+5*j+k)*250;
	printf("%d",m);
	return 0;
}
/*#include<stdio.h>
int main()
{
	int x,n,i,j,m;
	scanf("%d%d",&x,&n);
	j=1,m=0;
	for(i=x;j<=n;j++)
	{
	    if(i==6)
	    i=7;
	    else if(i==7)
	    i=1;
	    else if(i>=1&&i<=5)
	    m=m+250,i++;
	}
	printf("%d",m);
	return 0;
}*/