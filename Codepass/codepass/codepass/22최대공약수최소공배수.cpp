#include "stdio.h"


int get_gcd(int n1, int n2)
{
	int gcd = 1;
	for (int i = 1; i <= n1; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}
	return gcd;
}

int get_lcm(int n1, int n2)
{
	int gcd = 1;
	for (int i = 1; i <= n1; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}
	return (n1*n2/gcd);

}

int main()
{
	int n;
	scanf_s("%d", &n);

	int list[10] = { 0, };
	for (int i = 0; i < n; i++)
		scanf_s("%d", &list[i]);

	int gcd = 0;
	for (int i = 0; i < n-1; i++)
	{
		if (i == 0)
			gcd = get_gcd(list[i], list[i + 1]);
		else
			gcd = get_gcd(gcd, list[i + 1]);
	}

	int lcm = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (i == 0)
			lcm = get_lcm(list[i], list[i + 1]);
		else
			lcm = get_lcm(lcm, list[i + 1]);
	}

	printf("%d %d", gcd, lcm);

	return 0;
}
