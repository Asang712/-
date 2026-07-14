#include<stdio.h>
#include<algorithm>
using namespace std;
#define max 1000
int s[max];
int main()
{
	int m,n;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
		scanf("%d",&s[i]);
	sort(s,s+m);
    n=m;
	for(int i=1;i<m;i++)
        if(s[i]==s[i-1])
            n--;
    printf("%d\n",n);
	printf("%d ",s[0]);
    for(int i=1;i<m;i++)
    {
    	if(s[i]==s[i-1])
    		continue;
    	else
    		printf("%d ",s[i]);
	}
    	
	return 0;
}