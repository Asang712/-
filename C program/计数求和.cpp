#include<stdio.h>
int main()
{
    long long int i,k;
    double s=0.0;
    scanf("%d",&k);
    for(i=1;i>0;i++)
    {
        s=s+1.0/i;
        if(s>k)
        break;
    }
    printf("%lld",i);
    return 0;
}