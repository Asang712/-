#include<stdio.h>
int main()
{
	int i, j, k, n, m, a[100];
	scanf("%d", &n);	
	for (i = 0; i < n * n; i++)
	{
		a[i]=i+1;
	    if(a[i]<10)
		printf("0%d", a[i]);
		if(a[i]>9)
		printf("%d", a[i]);
		if ((i + 1) % n == 0)
		printf("\n");
	}
	printf("\n");
	k=0,j=1;
	for (i = 0; i < n * n,j<=n; i++)
	{
		if (i == (k * k + k) / 2)
		{
			k++;
			for(m=0;m<n-j;m++)
			printf("  ");
		}
		a[i]=i+1;
		if(a[i]<10)
		printf("0%d", a[i]);
		if(a[i]>9)
		printf("%d", a[i]);
		if (a[i] == (j * j + j) / 2)
		{
			printf("\n");
			j++;
		}
		if(j==n+1) break;
	}
	return 0;
}