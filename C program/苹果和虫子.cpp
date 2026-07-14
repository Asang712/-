#include<stdio.h>
int main()
{
	int m,t,s,n,p,q;
	scanf("%d%d%d",&m,&t,&s);
	if(t>0)
	{
		p=s/t;
	    q=s%t;
	    if(m>p)
	    {
	    	n=m-p;
	        if(q!=0) n=n-1;
	    }
	    if(m<=p) n=0;
	}
	if(t==0) n=0;
	printf("%d",n);
	return 0;
}