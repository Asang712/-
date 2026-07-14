#include<iostream>
using namespace std;
int main()
{
	int s1[20],s2[20],s3[40],s[81],a,b,c,i,j,k,m,n;
	cin>>a>>b>>c;
	for(i=0;i<a;i++)
	s1[i]=i+1;
	for(i=0;i<b;i++)
	s2[i]=i+1;
	for(i=0;i<c;i++)
	s3[i]=i+1;
	for(i=0;i<=a+b+c;i++)
	s[i]=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			for(k=0;k<c;k++)
			{
				m=s1[i]+s2[j]+s3[k];
				s[m]++;
			}
		}
	}
	m=s[0],n=0;
	for(i=1;i<=a+b+c;i++)
	{
		if(m<s[i])
		m=s[i],n=i;
	}
	cout<<n;
	return 0;
}