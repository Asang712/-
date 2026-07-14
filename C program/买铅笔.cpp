#include<stdio.h>
int main()
{
	int max(int a,int b,int c);
	float a[3][2],s0,s1,s2;
	int n,i,j,m0,m1,m2,p1,p2,p0;
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		scanf("%f%f",&a[i][0],&a[i][1]);
	}
	m0=n/a[0][0],s0=n/a[0][0];
	m1=n/a[1][0],s1=n/a[1][0];
	m2=n/a[2][0],s2=n/a[2][0];
	if(s0>m0) m0=m0+1;
	if(s1>m1) m1=m1+1;
	if(s2>m2) m2=m2+1;
	p0=m0*a[0][1];
	p1=m1*a[1][1];
	p2=m2*a[2][1];
	j=max(p0,p1,p2);
	printf("%d",j);
	return 0;
}

int max(int a,int b,int c)
{
	int w;
	if(a<b&&a<c) w=a;
	else if(b<a&&b<c) w=b;
	else w=c;
	return w;
}