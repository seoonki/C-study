#include "stdio.h"

int main()
{
	int n, k;
	scanf_s("%d %d", &n, &k);

	int n_list[1000] = { 0, };
	int indx = 0;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			n_list[indx++] = i;
	}

	printf("%d", n_list[k-1]);

	return 0;
}
