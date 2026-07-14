#include<bits/stdc++.h>
using namespace std;
struct Scoreline
{
	int k,s;
}a[5010]; 
int n,m,j; 
bool cmp(Scoreline a,Scoreline b)
{
	if(a.s!=b.s) return a.s>b.s;
	return a.k<b.k;
} 
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i].k>>a[i].s; 
	sort(a+1,a+n+1,cmp); 
	int x=a[int(m*1.5)].s; 
	cout<<x<<' ';
	for(int i=n;i>=1;i--)
	{
		if(a[i].s>=x)
		{
			j=i;
			break; 
		}
	}
	cout<<j<<endl; 
	for(int i=1;i<=j;i++) cout<<a[i].k<<' '<<a[i].s<<endl; 
	return 0;
} 