#include<iostream>
#include<cmath>
using namespace std;
int a[20],ans;
int k,n;

int num(int sum)
{
	int i,j;
	j=1;
	for(i=2;i<=sqrt(sum);i++)
	{
		if(sum%i==0)
		{
			j=0;
			break;
		}
	}
	return j;
}
void solve(int now,int sum,int sid)
{
	if(now==k)
	{
		if(num(sum)==1)
			ans++;
		
		return ;
	}
	for(int i=sid;i<n;i++)
		solve(now+1,sum+a[i],i+1);
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	solve(0,0,0);
	cout<<ans;
	return 0;
}
