#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,m,n,a[100],t;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	t=0;
	for(m=0;m<n-2;m++)
	{
		for(i=m+1;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]+a[m]==a[j])
				{
					t++;
					break;
				}
				if(a[i]+a[m]<a[j]) 
					break;
			}
		}
	}
	cout<<t;
	return 0;
}