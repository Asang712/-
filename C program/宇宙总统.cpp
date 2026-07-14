#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define max 100
char dig[20][max];
int len[20],num[20];
int main()
{
	int i,j,n,len[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",dig[i]);
		len[i]=strlen(dig[i]);
		num[i]=len[i];
	}
	sort(len,len+n);
	if(len[0]>len[1])
	{
		for(i=0;i<n;i++)
			if(len[0]==num[i])
				printf("%d\n%s",i+1,dig[i]);
	}
	return 0;
}