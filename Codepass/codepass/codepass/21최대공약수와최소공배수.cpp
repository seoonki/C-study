#include "stdio.h"

int main()
{
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);

	int gcd = 0;
	for (int i = 1; i <= n1; i++)
	{
		if ((n1 % i == 0) && (n2 % i == 0))
			gcd = i;
	}
	/*int n1_div[10000] = { 0, };
	int n2_div[10000] = { 0, };

	int indx1 = 0;
	for (int i = 1; i < n1; i++)
	{
		if (n1 % i == 0)
			n1_div[indx1++] = i;
	}

	int indx2 = 0;
	for (int i = 1; i < n2; i++)
	{
		if (n2 % i == 0)
			n2_div[indx2++] = i;
	}

	int gcd = 0;
	for (int i = 0; i < indx1; i++)
	{
		for (int j = 0; j < indx2; j++)
			if (n1_div[i] == n2_div[j])
				gcd = n1_div[i];
	}*/

	int lcm = n1*n2/gcd;
	/*int lcm = 0;
	for (int i = 1; i < 10000; i++)
	{
		if ((n1 * i) % n2 == 0)
		{
			lcm = n1 * i;
			break;
		}
	}*/

	printf("%d\n%d", gcd, lcm);

	return 0;
}
