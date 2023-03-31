#include "stdio.h"

int main()
{


	return 0;
}


#include <stdio.h>
#include "math.h"
int main()
{
	int s, e;
	while (true)
	{	
		scanf("%d %d", &s, &e);

		if (s >= 2 && s <= 9 && e >= 2 && e <= 9)
			break;
		printf("INPUT ERROR!\n");

	}

	if (s < e)
	{
		for (int i = s; i <= e; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				printf("%d * %d = %2d   ", i, j, i * j);
				if (j % 3 == 0)
					printf("\n");
			}
			printf("\n");
		}
	}
	else
	{
		for (int i = s; i >= e; i--)
		{
			for (int j = 1; j <= 9; j++)
			{
				printf("%d * %d = %2d   ", i, j, i * j);
				if (j % 3 == 0)
					printf("\n");
			}
			printf("\n");
		}
	}

	return 0;

}
