#include "stdio.h"

int main()
{
	int n;
	scanf_s("%d", &n);

	int arr[100][100] = { 0, };
	// 65 ~ 90

	int ch = 65;
	int line = 1;
	for (int i = 0; i < n; i++)
	{
		if (line % 2 == 0)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				arr[j][i] = ch;
				ch++;
				if (ch > 90)
					ch = 65;
			}
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				arr[j][i] = ch;
				ch++;
				if (ch > 90)
					ch = 65;
			}
		}
		line++;
		
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
