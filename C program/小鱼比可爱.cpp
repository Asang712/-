#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,a[100],b[100];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	b[0]=0;
	for(i=1;i<n;i++)
	{
	    k=0;
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j])
			k++;
		}
		b[i]=k;
	}
	for(i=0;i<n;i++)
	cout<<b[i]<<' ';
}