#include "stdio.h"

int main()
{
	int n, m;

	scanf_s("%d %d", &n, &m);
	int arr[30][30] = { 0, };
	int row = -1, col = -1;

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i <= j; i++)
		{
			if (i == 0 || i == j)
				arr[j][i] = 1;
			else
				arr[j][i] = arr[j - 1][i - 1] + arr[j - 1][i];
		}
	}

	if (m == 1)
	{
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i <= j; i++)
			{
				printf("%d ", arr[j][i]);
			}
			printf("\n");
		}
	}
	else if (m == 2)
	{
		for (int j = n - 1, line = 0; j >= 0; j--, line++)
		{
			for (int s = 0; s < line; s++)
				printf(" ");
			for (int i = 0; i <= j; i++)
				printf("%d ", arr[j][i]);
			for (int s = 0; s < line; s++)
				printf(" ");
			printf("\n");
		}
	}
	else if (m == 3)
	{
		for (int i = n-1, line = 0; i>=0; i--, line++)
		{
			for (int j = n-1, repeat=0; repeat <= line; j--, repeat++)
			{
				printf("%d ", arr[j][i]);
			}
			printf("\n");

		}
		/*int arr_flip[30][30] = { 0, };
		for (int i = n-1, line = 0, jj=0; i>= 0; i--, line++, jj++)
		{
			for (int j = n-1 - line, ii = 0; j < n; j++, ii++)
			{
				arr_flip[j][i] = arr[jj][ii];
			}
		}

		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i <= j; i++)
			{
				printf("%d ", arr_flip[j][i]);
			}
			printf("\n");
		}*/
	}


	return 0;
}