#include <stdio.h>
int main()
{
    long long ans=0;
    int n=0,i,a=0;
    while(scanf("%d",&a)!=EOF)
    {
    	ans=ans+a;
		n++;
	}
    for(i=1;i<n;i++)
	   ans=ans*2;
    printf("%lld",ans);
    return 0;
}