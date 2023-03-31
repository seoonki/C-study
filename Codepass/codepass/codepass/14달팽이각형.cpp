#include "stdio.h"

int main()
{
	int n;
	scanf_s("%d", &n);

	int num = 0;

	int arr[100][100] = { 0, };
	int row = -1, col = -1;

	int n_origin = n;

	while (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (num > 9)
				num = 0;
			arr[++row][++col] = num++;

		}
		n--;
		for (int i = 0; i < n; i++)
		{
			if (num > 9)
				num = 0;
			arr[row][--col] = num++;
		}
		n--;
		for (int i = 0; i < n; i++)
		{
			if (num > 9)
				num = 0;
			arr[--row][col] = num++;
		}
		n--;
	}
	
	for (int j = 0; j < n_origin; j++)
	{
		for (int i = 0; i <= j; i++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}