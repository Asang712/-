#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,a[7],b[7],c[7],i,j,k;
	cin>>n;
	for(i=0;i<7;i++)
	{
		cin>>a[i];
		c[i]=0;
	}
	for(k=0;k<n;k++)
	{
		j=0;
		for(i=0;i<7;i++)
		    cin>>b[i];
		for(i=0;i<7;i++)
		{
			if(a[i]==b[0]||a[i]==b[1]||a[i]==b[2]||a[i]==b[3]||a[i]==b[4]||a[i]==b[5]||a[i]==b[6])
			j++;
		}
		if(j==7) c[0]++;
		if(j==6) c[1]++;
		if(j==5) c[2]++;
		if(j==4) c[3]++;
		if(j==3) c[4]++;
		if(j==2) c[5]++;
		if(j==1) c[6]++;
	}
	for(i=0;i<7;i++)
	cout<<c[i]<<' ';
}