#include<stdio.h>
int main()
{
	int str[10000];  
	int u, v, l, m, i,j,k;
	scanf("%d%d", &l, &m);
	for (i = 0; i <=l; i++)
	{
		str[i]=0;
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &u);
		scanf("%d", &v);
		for (j = 0; j <= l; j++)
		{
			if (j >= (u-1) && j <= (v-1))
			str[j] = 1;
		}
	}
	for (k=0,i=0;i<=l;i++)
	{
		if (str[i]==0)
			k++;
	}
	printf("%d", k);
	return 0;
}