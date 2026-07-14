#include<stdio.h>
int main()
{
	int i, j, a[20][20];
	int x1, y1, x2, y2, n, m, k;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	for (i = 0; i <=x1; i++)
	{
		for (j = 0; j <=y1; j++)
		{
			if (i == 0 || j == 0)
				a[i][j] = 1;
		 if(a[i][j]==a[x2 - 1][y2 + 2]||a[i][j]==a[x2 + 1][y2 + 2]||a[i][j]==a[x2 + 2][y2 + 1]||a[i][j]==a[x2 + 2][y2 - 1]||a[i][j]==a[x2 + 1][y2 - 2]||a[i][j]==a[x2 - 1][y2 - 2]||a[i][j]==a[x2 - 2][y2 - 1]||a[i][j]==a[x2 - 2][y2 + 1]||a[i][j]==a[x2][y2])
			    a[i][j]=0;
		}
	}
	for (i = 1; i <=x1; i++)
	{
		for (j = 1; j <=y1; j++)
		{
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}

	printf("%d",a[i][j]);
	return 0;
}