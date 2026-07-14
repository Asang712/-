#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,x3,y1,y2,y3,a1,a2,a3,c;
	scanf("%f%f",&x1,&y1);
	scanf("%f%f",&x2,&y2);
	scanf("%f%f",&x3,&y3);
	a1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	a2=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
	a3=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
	c=sqrt(a1)+sqrt(a2)+sqrt(a3);
	printf("%1.2f",c);
	return 0;
}