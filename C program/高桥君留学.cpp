#include<stdio.h>
int main()
{
	int i;
	char a[100];
	float j,n,b[100];
	scanf("%f",&n);
	j=0.0;
	for(i=0;i<n;i++)
	{
		a[i]=getchar();
		printf("%c",a[i]);
		if(a[i]=='A') b[i]=4.0;
		if(a[i]=='B') b[i]=3.0;
		if(a[i]=='C') b[i]=2.0;
		if(a[i]=='D') b[i]=1.0;
		if(a[i]=='F') b[i]=0.0;
		j=j+b[i];
	}
	j=j/n;
	printf("%3.9f",j);
	return 0;
}