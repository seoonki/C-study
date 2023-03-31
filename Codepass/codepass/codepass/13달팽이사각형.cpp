#include "stdio.h"

int main()
{
	int n;

	scanf_s("%d", &n);

	int arr[100][100] = { 0, };

	int num = 1;

	int repeat = n;

	int a = 0, b = -1; 

	for (int i=0; i< repeat; i++)
		arr[a][++b] = num++;
	
	for (int j = 0; j <int(n / 2); j++)
	{
		repeat -= 1;
		for (int i = 0; i < repeat; i++)
			arr[++a][b] = num++;
		for (int i = 0; i < repeat; i++)
			arr[a][--b] = num++;

		repeat -= 1;
		for (int i = 0; i < repeat; i++)
			arr[--a][b] = num++;
		for (int i = 0; i < repeat; i++)
			arr[a][++b] = num++;
	}
	
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
			printf("%d ", arr[j][i]);
		printf("\n");
	}
		
		
	return 0;
}
