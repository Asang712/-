#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
#define max 1000
int main()
{
	int i,n;
	int num[max],num1[max]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=0;i<n-1;i++)
		num1[i]=abs(num[i]-num[i+1]);
	sort(num1,num1+n);
	for(i=1;i<n;i++)
		if(num1[i]!=i)
		{
			printf("Not jolly\n");
			return 0;
		}
	printf("Jolly\n");
	return 0;
}