#include<stdio.h>
int main()
{
	int t,t1,t2,T1,T2,A;
	double a,s,v;
	scanf("%lf %lf",&s,&v);
	a=s/v;
	A=s/v;
	if(a-A==0)
	{
		t=s/v+10;
	    t1=t/60;
	    t2=t%60;
	}
	else
	{
		t=s/v+10;
	    t1=t/60+1;
	    t2=t%60+1;
	}
	T1=8-t1;
	T2=60-t2;
	if(T1<=8&&T1>=0)
	{
		if(T2<10)
			printf("0%d:0%d",T1,T2);
		else
			printf("0%d:%d",T1,T2);
	}
	if(T1<0)
	{
		T1=24+T1;
		if(T2<10)
			printf("%d:0%d",T1,T2);
		else
			printf("%d:%d",T1,T2);
	}
	return 0;
}