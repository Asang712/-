#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int l,m,i,j,u,v,a[10001];
	cin>>l>>m;
	for(i=0;i<=l;i++)
	a[i]=0;
	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		for(j=u;j<=v;j++)
		a[j]=-1;
	}
	j=l+1;
	for(i=0;i<=l;i++)
	{
		if(a[i]==-1) j--;
	}
	cout<<j;
	return 0;
}