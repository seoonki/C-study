#include "stdio.h"

void dec2b(int i, int i_sq, int b)
{
	int indx_i = 0;
	int indx_i_sq = 0;
	char i_b_inv[100] = { 0, };
	char i_sq_b_inv[100] = { 0, };

	while (i_sq != 0)
	{
		int div_result = i_sq % b;
		if (div_result > 9)
			i_sq_b_inv[indx_i_sq++] = div_result - 10 + 'A';
		else
			i_sq_b_inv[indx_i_sq++] = div_result;

		i_sq = i_sq / b;
	}
	
	while (i != 0)
	{
		int div_result = i % b;
		if (div_result > 9)
			i_b_inv[indx_i++] = div_result - 10 + 'A';
		else
			i_b_inv[indx_i++] = div_result;

		i = i / b;
	}
	
	bool flag = true;
	for (int j = 0; j < indx_i_sq - 1 - j; j++)
	{
		if (i_sq_b_inv[j] != i_sq_b_inv[indx_i_sq - 1 - j])
		{
			flag = false;
			break;
		}
	}

	if (indx_i_sq == 1 || flag == true)
	{
		for (int j = 0; j < indx_i; j++)
		{
			int temp = i_b_inv[indx_i - 1 - j];
			if (temp > 9)
				printf("%c", temp);
			else
				printf("%d", temp);
		}
		printf(" ");

		for (int j = 0; j < indx_i_sq; j++)
		{
			int temp = i_sq_b_inv[indx_i_sq - 1 - j];
			if (temp > 9)
				printf("%c", temp);
			else
				printf("%d", temp);
		}
		printf("\n");
	}

}

int main()
{
	int b;
	scanf_s("%d", &b);

	for (int i = 1; i <= 300; i++)
	{
		dec2b(i, i*i, b);
	}

	return 0;
}
