#include "stdio.h"
#include "math.h"
#include "string.h"

int bin2dec(char* bin)
{
	int len = strlen(bin);
	int dec = 0;

	for (int i = 0; i < len; i++)
	{
		dec = dec * 2 + (bin[i] - '0'); // ASCII code 빼주는 거임 ('1'은 49, '0'은 48)
	}
	return dec;
}


int main()
{
	/*unsigned long long int bin;

	scanf_s("%lld", &bin);

	int len = 0;
	for (int i = 10, j=1; i < pow(10, 30); i *= 10, j++)
	{
		if (bin < i)
		{
			len = j;
			break;
		}
	}

	int dec= 0;
	unsigned long long int div = 1;
	for (int i = 0; i < len; i++)
	{
		dec += (((bin / div) & 1) * pow(2, i));
		div *= 10;
	}

	printf("%d", dec);*/

	// 30자리 --> 너무 커서 문자열로 받아야함

	char bin[30];

	scanf_s("%s", bin, int(sizeof(bin)));

	printf("%d\n", bin2dec(bin));

	return 0;
}

