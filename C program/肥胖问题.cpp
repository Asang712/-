#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float h,m,b;
	scanf("%f%f",&h,&m);
	b=h/(m*m);
	if(b<18.5) printf("Underweight");
	if(b>18.5&&b<24) printf("Normal");
	if(b>24) cout<<b<<"\nOverweight";
	return 0;
}