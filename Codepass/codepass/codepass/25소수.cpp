#include "stdio.h"


int check_prime(int num)
{
	if (num < 2)
		return false;
	else
	{
		for (int i = 2; i <= num / i; i++)
		{
			if (num % i == 0)
				return false;
		}
		return true;
	}
}


int main()
{
	int m;
	int n;
	scanf_s("%d\n%d", &m, &n);


	int prime[10000] = { 0, };

	int idx = 0;
	for (int i = m; i <= n; i++)
	{
		if (check_prime(i) == true)
		{
			prime[idx++] = i;
		}
	}

	int sum = 0;
	for (int i = 0; i < idx; i++)
	{
		sum += prime[i];
	}
	if (sum > 0)
		printf("%d\n%d", sum, prime[0]);
	else
		printf("-1");

	return 0;
}