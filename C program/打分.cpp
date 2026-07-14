#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	double a[1000],k,aver;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		if(a[j]>a[j+1])
		k=a[j],a[j]=a[j+1],a[j+1]=k;
	}
	k=0;
	for(i=1;i<n-1;i++)
	k=k+a[i];
	aver=k/(n-2);
	printf("%1.2f",aver);
	return 0;
}