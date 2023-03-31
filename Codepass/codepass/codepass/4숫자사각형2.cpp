#include "stdio.h"

int main()
{	
	int n, m;
	scanf("%d %d", &n, &m);

	int num = 1;
	int line = 1;
	for (int i = 0; i < n; i++)
	{
		if (line % 2 == 0)
		{
			num += m;
			for (int j = 0; j < m; j++)
			{
				num -= 1;
				printf("%d ", num);
			}
			printf("\n");
			line += 1;
			num += m;
		}
		else
		{
			for (int j = 0; j < m; j++)
			{
				printf("%d ", num);
				num += 1;
			}
			printf("\n");
			line += 1;
		}
		
	}

	return 0;

}