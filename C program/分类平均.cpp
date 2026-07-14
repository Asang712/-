#include<stdio.h>
int main()
{
	int n,k,a,b,i,x,y;
	float A,B;
	x=y=0;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		if(i%k==0)
		a=a+i,x++;
		else
		b=b+i,y++;
	}
	A=a/x,B=b/y;
	printf("%2.11f %2.11f",A,B);
    return 0;
}

/*#include<iostream>
#include<cstdio>
using namespace std;
int n,k,cnt1=0,cnt2=0;
double ans1,ans2,sum1,sum2;
int main()
{
	cin>>n;
	cin>>k;
	for(int i=1;i<=n;i++)
    {
		if(i%k==0)
        {
			sum1+=i;
			cnt1++;
		}
        else
        {
			sum2+=i;
			cnt2++;
		}
	}
	ans1=sum1/cnt1;
	ans2=sum2/cnt2;
	printf("%.1lf %.1lf",ans1,ans2);
	return 0;
}*/