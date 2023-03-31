#include "stdio.h"
#include "string.h"

void dec2bin(int dec)
{
	char bin_inv[20];

	int indx = 0;
	while (dec != 0)
	{
		bin_inv[indx++] = dec % 2;
		dec /= 2;
	}
	for (int i = indx-1; i >= 0; i--)
	{
		printf("%d", bin_inv[i]);
	}
}

void dec2hex(int dec)
{
	char bin_inv[20];

	int indx = 0;
	while (dec != 0)
	{
		char hex = dec % 16;
		if (hex > 9)
			hex = hex - 10 + 'A';
		bin_inv[indx++] = hex;
		dec /= 16;
	}
	for (int i = indx - 1; i >= 0; i--)
	{
		if (bin_inv[i] > 9)
		{
			printf("%c", bin_inv[i]);
		}
		else
		{
			printf("%d", bin_inv[i]);
		}
		
	}
}

void dec2oct(int dec)
{
	char bin_inv[20];

	int indx = 0;
	while (dec != 0)
	{
		bin_inv[indx++] = dec % 8;
		dec /= 8;
	}
	for (int i = indx - 1; i >= 0; i--)
	{
		printf("%d", bin_inv[i]);
	}
}

int main()
{
	int dec;
	int mode;

	scanf_s("%d %d", &dec, &mode);

	if (mode == 2)
	{
		dec2bin(dec);
	}
	else if (mode == 16)
	{
		dec2hex(dec);
	}
	else if (mode == 8)
	{
		dec2oct(dec);
	}
	
	return 0;
}
