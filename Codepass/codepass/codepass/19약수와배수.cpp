#include "stdio.h"

int main()
{
	int n;
	scanf_s("%d", &n);

	int num_list[40] = { 0, };
	for (int i = 0; i < n; i++)
		scanf_s("%d", &num_list[i]);
	
	int m;
	scanf_s("%d", &m);

	int div_list[40] = { 0, };
	int mul_list[40] = { 0, };

	int div_indx = 0;
	int mul_indx = 0;

	for (int i = 0; i < n; i++)
	{
		if (m % num_list[i] == 0)
		{
			div_list[div_indx++] = num_list[i];
		}
		if (num_list[i] % m == 0)
		{
			mul_list[mul_indx++] = num_list[i];
		}
	}

	int div_list_sum = 0;
	int mul_list_sum = 0;
	for (int i = 0; i < div_indx; i++)
		div_list_sum += div_list[i];
	for (int i = 0; i < mul_indx; i++)
		mul_list_sum += mul_list[i];

	printf("%d\n", div_list_sum);
	printf("%d\n", mul_list_sum);

	return 0;
}
