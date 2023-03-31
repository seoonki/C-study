#include "stdio.h"

int main()
{
	int n;
	scanf_s("%d", &n);
	char arr[100][100] = { 0, };

	char ch = 'A';

	for (int i = 0, s = n-1; i < n; i++, s++)
	{
		for (int j = 0; j < n-i; j++)
		{
			arr[i + j][s - (i + j)] = ch;
			if (ch >= 'Z')
				ch = 'A';
			else
				ch++;;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 0)
				printf("  ");
			else
				printf("%c ", arr[i][j]);
		}
			
		printf("\n");
	}
		
	return 0;
}