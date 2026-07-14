#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, s[10][3], c, m, e, n, k, x;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
			scanf("%d", &s[i][0]);
			scanf("%d", &s[i][1]);
			scanf("%d", &s[i][2]);
	}
	x = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			c = s[i][0] - s[j][0];
			m = s[i][1] - s[j][1];
			e = s[i][2] - s[j][2];
			k = c + m + e;
			if (fabs(c) < 6 && fabs(m) < 6 && fabs(e) < 6 && fabs(k) < 11)
				x++;
		}
	}
	printf("%d", x);
	return 0;
}