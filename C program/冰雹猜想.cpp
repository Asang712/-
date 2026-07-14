#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a[100000];
	cin>>n;
	for(i=0;;i++)
	{   
	    a[i]=n;
		if(n==1)  break;
	    if(n%2==0)  n=n/2;
	    else  n=n*3+1;
	}
	for(j=i;j>=0;j--)
	printf("%d ",a[j]);
	return 0;
}