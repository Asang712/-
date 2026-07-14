#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,m,s[1000],x[40000];
	cin>>n;
	k=0,m=0;
	for(i=0;k<n*n;i++)
	{
		cin>>s[i];
		m++;
		k=s[i]+k;
	}
	k=0;
	for(i=0;i<m;i++)
	{
		if(i%2==0)//输出0;
		{
			for(j=0;j<s[i];j++)
			{
				x[k]=0;
				k++;
			}
		}
		else//输出0;
		{
			for(j=0;j<s[i];j++)
			{
			    x[k]=1;
				k++;
			}
		}
	}
	for(i=0;i<n*n;i++)
	{
		printf("%d",x[i]);
		if((i+1)%n==0)
		printf("\n");
	}
	return 0;
}