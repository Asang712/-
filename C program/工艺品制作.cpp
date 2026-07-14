#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int w,x,h,q,x1,x2,y1,y2,z2,z1;
	int i,j,k,a,b,c,rect[20][20][20]={0};
	cin>>w>>x>>h>>q;
	for(i=1;i<=q;i++)
	{
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		for(a=x1;a<=x2;a++)
			for(b=y1;b<=y2;b++)
				for(c=z1;c<=z2;c++)
				    rect[a][b][c]=-1;
	}
	j=w*x*h;
	for(a=1;a<=w;a++)
	{
		for(b=1;b<=x;b++)
		{
			for(c=1;c<=h;c++)
			if(rect[a][b][c]==-1)
			j--;
		}
	}
	cout<<j;
	return 0;
}