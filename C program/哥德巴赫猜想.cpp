#include<stdio.h>
#include<math.h>
int main()
{
	int test(int x);
	int i,j,k,m,n;
	scanf("%d",&n);
	m=4;
	while(m<=n)
	{
		for(i=2;i<=m/2;i++)
		{
			if(test(i)!=1) continue;
			j=m-i;
			if(test(j)==1)
			{
				printf("%d=%d+%d\n",m,i,j);
				break;
			}
		}
		m=m+2;
	}
	return 0;
}

int test(int x)
{
	int i,j;
	if(x==2||x==3) j=1;
	if(x>3)
	{
		j=1;
		for(i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				j=0;
				break;
			}
		}
	}
	return j;
}