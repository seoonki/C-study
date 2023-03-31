#include "stdio.h"

int main()
{

	int n;
	
	scanf_s("%d", &n);

	if (n > 100 || n < 0 || (n % 2 == 0))
		printf("INPUT ERROR!");
	else
	{
		int space = 0;
		int star = 1;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < space; j++)
				printf(" ");
			for (int j = 0; j < star; j++)
				printf("*");
			printf("\n");

			if (i < int(n / 2))
			{
				space += 1;
				star += 2;
			}
			else
			{
				space -= 1;
				star -= 2;
			}
		}
		return 0;
	}
	
}