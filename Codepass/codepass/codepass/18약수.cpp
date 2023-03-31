#include "stdio.h"
#include "math.h"

void Bubble_Sort(int arr[], int len)
{
	int i, j, tmp;
	for (i = 0; i < len - 1; ++i) 
	{
		for (j = 0; j < len - i - 1; ++j) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int n;
	scanf_s("%d", &n);

	/*for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			printf("%d ", i);
	}*/

	int sq = int(sqrt(n));

	int indx = 0;
	int arr[10000] = { 0, };

	for (int i = 1; i <= sq; i++)
	{
		if (n % i == 0)
		{
			arr[indx++] = i;

			if(n/i != i)
				arr[indx++] = n / i;
		}
	}
	
	/*for (int i = 0; i < 10000; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}*/

	
	Bubble_Sort(arr, 10000);

	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}

	return 0;
}