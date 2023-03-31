#include "stdio.h"

int main()
{

	int n, m;
	scanf_s("%d %d", &n, &m);
	
	if (n > 100 || n < 1)
	{
		printf("INPUT ERROR!");
	}
	else if (m > 3 || m < 1)
	{
		printf("INPUT ERROR!");
	}
	else
	{
		if (m == 1)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = n-i-1; j < n; j++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
		else if (m == 2)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n-i; j++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
		else
		{
			for (int i = 0, space = n - 1; i < n; i++, space--)
			{
				for (int j = 0; j < 2*n-1; j++)
				{
					if (j < space)
						printf(" ");
					else if (j >= space && j< 2*n-1 - space)
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}
		}
	}
	return 0;
}