#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[3],i,j,k;
	char s[50];
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(a[j]>a[j+1])
			k=a[j],a[j]=a[j+1],a[j+1]=k;
		}
	}
	getchar();
	scanf("%s",s);
	for(i=0;i<3;i++)
	{
		if(s[i]=='A')
		cout<<a[0]<<' ';
		if(s[i]=='B')
		cout<<a[1]<<' ';
		if(s[i]=='C')
		cout<<a[2]<<' ';
	}
	return 0;
}