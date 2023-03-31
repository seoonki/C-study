#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char input_string[10000];
	scanf_s("%s", input_string, int(sizeof(input_string)));

	int len = strlen(input_string);

	int num_koi = 0;
	int num_ioi = 0;

	for (int i = 0; i < len; i++)
	{
		if (input_string[i] == 'K')
		{
			if (input_string[i + 1] == 'O')
			{
				if (input_string[i + 2] == 'I')
				{
					num_koi++;
				}
			}
		}
		if (input_string[i] == 'I')
		{
			if (input_string[i + 1] == 'O')
			{
				if (input_string[i + 2] == 'I')
				{
					num_ioi++;
				}
			}
		}
	}

	printf("%d\n", num_koi);
	printf("%d", num_ioi);

	return 0;
}