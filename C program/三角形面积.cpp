#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,p;
    scanf("%f %f %f",&a,&b,&c);
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%1.1f",s);
    return 0;
}