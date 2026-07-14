#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, k, m, n, t;
	char math[25];
	scanf("%s", math);
	k = 0;
	for (i = 0; i < strlen(math); i++)
	{
		if (math[i] == '.')
		{
			k = 1;
			m = i;
			break;
		}
		if (math[i] == '/')
		{
			k = 2;
			m = i;
			break;
		}
		if (math[i] == '%')
		{
			k = 3;
			break;
		}
	}
	t = 0;
	if (k == 0)
	{
		for (i = strlen(math) - 1; i >= 0; i--)
		{
			if (math[i] != '0')
			{
				t = 1;
				for (j = i; j >= 0; j--)
				    printf("%c", math[j]);
			}
			if (t == 1)
				break;
		}
	}
	if (k == 1)
	{
		for (i = m-1; i >= 0; i--)
		{
			if (math[i] != '0')
			{
				t = 1;
				for (j = i; j >= 0; j--)
					printf("%c", math[j]);
			}
			if (t == 1)
				break;
		}
		t = 0;
		printf(".");
		for (i = m+1; i < strlen(math); i++)
		{
			t=2;
			if(math[i] != '0')
			{
				t = 1;
				for (j = strlen(math); j >= i; j--) 
					printf("%c", math[j]);
		    }
			if(t == 1)
			   break;
		}
		if(t==2)
		   printf("0");
	}
	if (k == 2)
	{
		for (i = m - 1; i >= 0; i--)
		{
			if (math[i] != '0')
			{
				t = 1;
				for (j = i; j >= 0; j--)
					printf("%c", math[j]);
			}
			if (t == 1)
				break;
		}
		t = 0;
		printf("/");
		for (i = strlen(math)-1; i > m; i--)
		{
			if (math[i] != '0')
			{
				t = 1;
				for (j = i; j > m; j--)
					printf("%c", math[j]);
			}
			if (t == 1)
				break;
		}
	}
	if (k == 3)
	{
		for (i = strlen(math) - 2; i >= 0; i--)
		{
			if (math[i] != '0')
			{
				t = 1;
				for (j = i; j >= 0; j--)
					printf("%c", math[j]);
			}
			if (t == 1)
				break;
		}
		m=strlen(math)-1;
		printf("%c",math[m]);
	}
	return 0;
}