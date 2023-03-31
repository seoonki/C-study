#include "stdio.h"

int main()
{
	int n;
	scanf_s("%d", &n);

	if (n > 100 || n < 1 || (n%2==0))
	{
		printf("INPUT ERROR");
	}
	else
	{
		int arr[100][100] = { 0, };
		char ch = 'A';

		int center = int(n / 2);
		for (int i = center, w = 0; i >= 0; i--, w++)
		{
			for (int j = center - w; j <= center + w; j++)
			{
				arr[i][j] = ch;
				if (ch >= 'Z')
				{
					ch = 'A';
				}
				else
				{
					ch++;
				}
				
			}
		}
		
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < n; i++)
			{
				if (arr[i][j] == 0)
				{
					printf(" ");
				}
				else
				{
					printf("%c ", arr[i][j]);
				}
			}
			printf("\n");
		}
		
	}
	
	return 0;
}