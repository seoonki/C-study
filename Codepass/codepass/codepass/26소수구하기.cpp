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
	int n;
	scanf_s("%d", &n);

	int m[100] = { 0, };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &m[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m[i]; j++)
		{
			if (check_prime(m[i]))
			{
				printf("%d\n", m[i]);
					break;
			}

			bool check1 = check_prime(m[i]+j);
			bool check2 = check_prime(m[i]-j);
			if (check1 && check2)
			{
				printf("%d %d\n", m[i] - j, m[i] + j);
				break;
			}
			else if (check1)
			{
				printf("%d\n", m[i] + j);
				break;
			}
			else if (check2)
			{
				printf("%d\n", m[i] - j);
				break;
			}
		}
	}
	return 0;
}