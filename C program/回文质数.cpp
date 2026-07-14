#include<stdio.h>
#include<math.h>
int main()
{
	int check1(int x);
	int check2(int x);
	int check3(int x);
	int a,b,i;
	scanf("%d%d",&a,&b);
	if
	for(i=a;i<=b;i++)
	{
		if(check1(i)==0) continue;
		if(check2(i)==0) continue;
		if(check3(i)==0) continue;
		printf("%d\n",i);
	}
	return 0;
}

int check1(int x)//偶数位不可能是回文质数
{
if((x>11&&x<=99)||(x>=1000&&x<=9999)||(x>=100000&&x<=999999)||(x>=10000000&&x<=99999999))
    return 0;
	else
	return 1;
}

int check2(int x)//判断质数
{
	int i,j;
	j=1;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			j=0;
			break;
		}
	}
	return j;
}

int check3(int x)//判断回文
{
	int i,j,k,a[10];
	k=1;
	for(i=0;x>0;i++)
	{
		a[i]=x%10;
		x=x/10;
	}
	j=i;
	for(i=0;i<j/2;i++)
	{
		if(a[i]!=a[j-1-i])
		{
			k=0;
			break;
		}
	}
	return k;
}
