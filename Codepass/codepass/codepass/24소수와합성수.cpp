#include "stdio.h"
#include "math.h"

int main()
{
	int n[5];

	scanf_s("%d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4]);

	for (int i = 0; i < 5; i++)
	{
		int num = 0;
	 // for (int j = 1; j*j <= n[i]; j++)
	 // for (int j = 1; j <= n[i]/j; j++)
		for (int j = 1; j <= sqrt(n[i]); j++)
		{
			if (n[i] % j == 0)
			{
				num++;
			}
				
			if (num >= 2)
				break;
		}

		if (n[i] == 1)
			printf("number one\n");
		else if (num == 1)
			printf("prime number\n");
		else
			printf("composite number\n");
	}
	

	return 0;
}

// n의 소수 구할때 sart(n)까지만 확인하면 된다