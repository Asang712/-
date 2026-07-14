#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 0:printf("Today, I ate 0 apple.");break;
		case 1:printf("Today, I ate 1 apple.");break;
		default :printf("Today, I ate %d apples.",a);break;
	}
	return 0;
}