#include<stdio.h>
#include<algorithm>
using namespace std;
#define max 100000
int s[max];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)
		scanf("%d",&s[i]);
	sort(s,s+m);
	for(int i=0;i<m;i++)
		printf("%d ",s[i]);
	return 0;
}