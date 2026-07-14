#include<stdio.h>
#include<math.h>
struct student
{
	int num;
	int a;
	int b;
}s[1000];
int main()
{
	int i,j,k,m,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   scanf("%d%d%d",&s[i].num,&s[i].a,&s[i].b);
	for(i=0;i<n;i++)
	{
		if(s[i].a*7+s[i].b*3>=800&&s[i].a+s[i].b>140)
		   printf("Excellent\n");
		else
		   printf("Not excellent\n");
	}
	return 0;
}