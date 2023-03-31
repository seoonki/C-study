#include "stdio.h"

int main()
{

	int n, m;

	scanf_s("%d %d", &n, &m);

	if (n > 100 || (n % 2 == 0))
		printf("INPUT ERROR!");
	else if (m>4 || m<1)
		printf("INPUT ERROR!");
	else
	{
		if (m == 1)
		{
			int count = 1;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < count; j++)
				{
					printf("*");
				}
				printf("\n");
				if (i > int(n / 2)-1)
					count--;
				else
					count++;
			}
		}
		else if (m == 2)
		{
			int count = 1;
			for (int i = 0; i < n; i++)
			{
				for (int s = 0; s < int(n / 2) - count + 1; s++)
				{
					printf(" ");
				}
				for (int j = 0; j < count; j++)
				{
					printf("*");
				}
				printf("\n");
				if (i > int(n / 2) - 1)
					count--;
				else
					count++;
			}
		}
		else if (m == 3)
		{
			int s = 0;
			int star = n;

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < s; j++)
					printf(" ");
				for (int j = 0; j < star; j++)
					printf("*");
				for (int j = 0; j < s; j++)
					printf(" ");

				printf("\n");

				if (i<int(n / 2))
				{
					s += 1;
					star -= 2;
				}
				else
				{
					s -= 1;
					star += 2;
				}

			}
		}
		else if (m == 4)
		{
			int s = 0;
			int star = int(n / 2) + 1;

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < s; j++)
					printf(" ");
				for (int j = 0; j < star; j++)
					printf("*");
				printf("\n");

				if (i<int(n / 2))
				{
					s += 1;
					star -= 1;
				}
				else
				{
					star += 1;
				}
			}
		}
	}

	return 0;
}