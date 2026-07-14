#include<stdio.h>
int s[10][10];
int m;
int main()
{
	void arr(int a,int b,int n);//a为起始数字，b为起始行,n为长度；
	int n;
	scanf("%d",&n);
	m=n;
	arr(1,1,n);
	return 0;
}

void arr(int a,int b,int n)
{
	int i,j;
	if(n<b)
	{
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=m;j++)
			{
			    if(s[i][j]<10)
		           printf("%3d ",s[i][j]);
		        else
		           printf("%3d ",s[i][j]);
			}
		    printf("\n");
		}
		   
	}
	else
	{
		
	    for(i=b;i<=n;i++)//起始行
	    {
		    s[b][i]=a;
		    a++;
	    }
	    a--;
	    for(j=b;j<=n;j++)//末列
	    {
		    s[j][n]=a;
		    a++;
	    }
	    a--;
	    for(i=n;i>=b;i--)//末行
	    {
	    	
	   	    s[n][i]=a;
	   	    a++;
	    }
	    a--;
	    for(j=n;j>b;j--)//起始列
	    {
	    	s[j][b]=a;
	    	a++;
		}
		arr(a,b+1,n-1);
	}
}