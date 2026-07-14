#include<algorithm>
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

struct coor
{
	double x;
	double y;
	double z;
}a[50000];

bool cmp(coor s1,coor s2)
{
	return s1.z<s2.z;
}

int main()
{
	int i,n;
	double k=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i].x>>a[i].y>>a[i].z;
	sort(a,a+n,cmp);
	for(i=0;i<n-1;i++)
	{
		k+=sqrt(pow(a[i].x-a[i+1].x,2)+pow(a[i].y-a[i+1].y,2)+pow(a[i].z-a[i+1].z,2));
	}
	printf("%0.3f",k);
	return 0;
}
