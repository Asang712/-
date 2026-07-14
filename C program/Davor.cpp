#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,k,x,m;
	cin>>n;
	for(k=1;k>0;k++)
	{
		x=n/364-3*k;
		if(x<=100&&x>=1)
		{
			cout<<x<<"\n"<<k;
			break;
		}
	}
	return 0;
}