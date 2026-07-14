#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,i,a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=1,max=0;
	for(i=1;i<n;i++)
	{
		if(a[i]-a[i-1]==1) k++;
		else k=1;
		if(k>max) max=k;
    }
	cout<<max;
	return 0;
}