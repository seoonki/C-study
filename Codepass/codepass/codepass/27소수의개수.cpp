#include "stdio.h"

int prime[3000000];

void eratos(int n)
{
	int i, j;
	prime[0] = prime[1] = 1;
	
	for (i = 2; i * i < n; i++)
	{
		if (prime[i] == 0)
		{
			for (j = i * i; j <= n; j += i)
			{
				prime[j] = 1;
			}
		}
	}
}


int main()
{
	int n, m;

	scanf_s("%d %d", &m ,& n);
	
	eratos(n);

	int cnt = 0;
	for (int i = m; i <= n; i++)
	{
		if (prime[i] == 0)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}
