#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int i,j,k,m,n,a[1000][3];
	char s[1000][8],s1[8];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j]>s[j+1])
			{
				strcpy(s1,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],s1);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(abs(a[j][0]-a[i][0])<=5&&abs(a[j][1]-a[i][1])<=5&&abs(a[j][2]-a[i][02])<=5&&abs(a[j][0]-a[i][0]+a[j][1]-a[i][1]+a[j][2]-a[i][02]<=10))
			  printf("%s %s\n",s[i],s[j]);
		}
	}
	return 0;
}