#include "stdio.h"
#include "math.h"

int main()
{
	int n[11];
	int num_of_n = 0;
	for (int i = 0; i < 11; i++)
	{
		scanf_s("%d", &n[i]);
		if (n[i] == 0)
		{
			num_of_n = i + 1;
			break;
		}
	}
	
	for (int i = 0; i < num_of_n-1; i++)
	{
		int arr[100] = { 0, };
		int cnt = 0;
		while (1)
		{
			if (n[i] == 0)
				break;
			else
			{
				arr[cnt++] = n[i] % 10;
				n[i] /= 10;
			}
		}
		int reciprocal = 0;
		int sum = 0;
		for (int i = 0; i < cnt; i++)
		{
			reciprocal += arr[i] * pow(10, cnt - i - 1);
			sum += arr[i];
		}
		printf("%d %d\n", reciprocal, sum);
	}

	// sum += a % 10
	// rev = rev * 10 + a % 10

	return 0;
}