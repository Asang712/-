#include<iostream>
#include<algorithm>
using namespace std;
struct score
{
	int num;
	int c;
	int m;
	int e;
	int sum;
}a[300];
bool cmp(score s1,score s2)
{
	if(s1.sum!=s2.sum) return s1.sum>s2.sum;
	else
	{
		if(s1.c!=s2.c)	return s1.c>s2.c;
		else	return s1.num<s2.num;
	}	
}

int main()
{
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i].c>>a[i].m>>a[i].e;
		a[i].num=i+1;
		a[i].sum=a[i].c+a[i].m+a[i].e;
	}
	sort(a,a+n,cmp);
	for(i=0;i<5;i++)
		cout<<a[i].num<<' '<<a[i].sum<<endl;
	return 0;
}