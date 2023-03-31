#include "stdio.h"

int main()
{
	int n;
	scanf_s("%d", &n);

	int arr[100][100] = { 0, };

	int num = 1;
	int row = 0, col = 0;
	
	arr[row][col] = num++;

	while (num <= n * n)
	{
		if (row == n - 1)
			arr[row][++col] = num++;
		else
			arr[++row][col] = num++;

		if (num > n * n)
			break;

		while (row > 0 && col < n-1 )
		{
			arr[--row][++col] = num++;
		}

		if (col == n - 1)
			arr[++row][col] = num++;
		else
			arr[row][++col] = num++;

		if (num > n * n)
			break;
		
		while (row < n-1 && col > 0)
		{
			arr[++row][--col] = num++;
		}
	}
	
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}