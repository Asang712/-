#include<stdio.h>
#include<algorithm>
using namespace std;
#define max 20000
int main()
{
	int i,n,b,j,h;
	int cow[max];
	scanf("%d%d",&n,&b);
	for(i=0;i<n;i++)
		scanf("%d",&cow[i]);
	sort(cow,cow+n);
	j=0,h=0;
	for(i=n-1;i>=0;i--)
	{
		h+=cow[i];
		j++;
		if(h>=b)
		{
			printf("%d",j);
			break;
		}
	}
	return 0;
}