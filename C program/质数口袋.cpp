#include<stdio.h>
int main()
{
	int judge(int n);
	int i,j,l,sum;
	scanf("%d",&l);
	sum=0,j=0;
	if(l==1)
	{
		printf("0");
	}
	else
	{
		for(i=2;sum<=l;i++)
	    {
		    if(judge(i)==1)
		    {
		    	sum=sum+i;
		    	if(sum>l)
	 	        break;
				printf("%d\n",i);
			    j++;
		    }
	    }
	    printf("%d",j);
    }
	return 0;
}

int judge(int n)
{
	int i,j;
	j=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			j=0;
			break;
		}
	}
	return j;
}