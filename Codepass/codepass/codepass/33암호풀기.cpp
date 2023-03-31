#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char key[100];
	char in[100];
	char out[100];

	scanf_s("%s\n", key, int(sizeof(key)));
	scanf_s("%[^\n]", in, int(sizeof(in)));

	char space[100] = " ";
	int space_ascii = space[0];
	for (int i = 0; i < strlen(in); i++)
	{
		int idx;
		if (in[i] == space_ascii)
		{
			out[i] = space_ascii;
		}
		else if (in[i] < 'a')
		{
			idx = in[i] - 'A';
			out[i] = key[idx] + 'A' - 'a';
		}
		else
		{
			idx = in[i] - 'a';
			out[i] = key[idx];
		}
	}

	for (int k = 0; k < strlen(in); k++)
	{
		printf("%c", out[k]);
	}

	return 0;
}
