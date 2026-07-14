#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,i,j;
	cin>>a;
	for(i=1;i>0;i++)
	{
		if(a<=1)
		break;
		a=a/2;
	}
	cout<<i;
	return 0;
}