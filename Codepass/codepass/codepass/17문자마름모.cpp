#include "stdio.h"

int main()
{

	int n;
	scanf_s("%d", &n);

	int n_origin = n;
	char ch = 'A';

	int arr[500][500] = { 0, };

	int row = 0;
	int col = n - 1;

	arr[row][col] = ch++;

	while (n > 1)
	{
		for (int i = 0; i < n - 1; i++)
		{
			arr[++row][--col] = ch++;
			if (ch > 'Z')
				ch = 'A';
		}
			
		for (int i = 0; i < n - 1; i++)
		{
			arr[++row][++col] = ch++;
			if (ch > 'Z')
				ch = 'A';
		}
			
		for (int i = 0; i < n - 1; i++)
		{
			arr[--row][++col] = ch++;
				if (ch > 'Z')
					ch = 'A';
		}
			
		for (int i = 0; i < n - 2; i++)
		{
			arr[--row][--col] = ch++;
			if (ch > 'Z')
				ch = 'A';
		}
			
		arr[row][--col] = ch++;
		if (ch > 'Z')
			ch = 'A';

		n--;
	}
	
	for (int j = 0; j < n_origin*2-1; j++)
	{
		for (int i = 0; i < n_origin * 2 - 1; i++)
		{
			if (arr[j][i] == 0)
				printf("  ");
			else
				printf("%c ", arr[j][i]);
		}
		printf("\n");
	}


	return 0;
}
