#include<stdio.h>
#include<math.h>
int main()
{
	float s,k;
	int i;
	k=0;	
	scanf("%f",&s);
	for(i=1;;i++)
	{
		k=k+2.0*pow(0.98,i-1);
		if(k>=s)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}