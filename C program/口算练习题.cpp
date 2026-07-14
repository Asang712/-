#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,m,n,s,t;
	char x[5];
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>x;
		if(x[0]>='a'&&x[0]<='c')
		{
			if(x[0]=='a') t=='+',s=m+n;
			if(x[0]=='b') t=='-',s=m-n;
			if(x[0]=='c') t=='*',s=m*n;
			cin>>m>>n;
			cout<<m<<t<<n<<"="<<s<<endl;
			int j1,j2,j3;
			while(m>0)
			{
				m=m/10;
				j1++;
			}
			while(n>0)
			{
				n=n/10;
				j2++;
			}
			while(s>0)
			{
				s=s/10;
				j3++;
			}
			cout<<j1+j2+j3+2<<endl;
		}
		else
		{
			cin>>j;
			m=strlen(x),n=0;;
			for(int j=0;j<m;j++)
			{
				n=n+x[j]*pow(10,m-j-1);
			}
			int j0;
			while(j>0)
			{
				j=j/10;
				j0++;
			}
			if(t=='+') s=x[0]+n;
			if(t=='-') s=x[0]-n;
			if(t=='*') s=x[0]*n;
			cout<<x[0]<<t<<n<<"="<<s<<endl;
			cout<<m+j0+2<<endl;
		}
	}
	return 0;
}