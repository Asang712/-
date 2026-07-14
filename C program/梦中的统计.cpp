#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,m,n,a[10],t;
	cin>>m>>n;
	k=1;
	for(i=0;i<=9;i++)
	    a[i]=0;
	for(i=m;i<=n;i++)
	{
		k=i;
		while(k>0)
		{
			t=k%10;
			for(j=0;j<=9;j++)
			{
				if(j==t)
				{
					a[j]++;
					break;
				}
			}
			k=k/10;	
		}
	}
	for(j=0;j<=9;j++)
	    cout<<a[j]<<' ';
	return 0;
}