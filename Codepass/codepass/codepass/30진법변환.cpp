#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"

// a진법의 수 s를
// b진법의 수 t로 변환

void a2b(char* s, int a, int b)
{	
	int len = strlen(s);
	long long s_dec = 0, num = 0;

	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'A')
			num = s[i] - 'A' + 10;
		else
			num = s[i] - '0';

		s_dec += num * (long long)pow(a, len-1-i);
	}

	long long t_dec_inv[100] = { 0, };
	// char* t_dec_inv = (char*)malloc(sizeof(char) * 100);


	int indx = 0;
	if (s_dec == 0)
		printf("%lld", s_dec);

	while (s_dec != 0)
	{
		long long num = s_dec % b;
		if (num > 9)
			num = num - 10 + 'A';
		if(t_dec_inv != NULL)
			t_dec_inv[indx++] = num;

		s_dec /= b;
	}
	for (int i = indx - 1; i >= 0; i--)
	{
		if (t_dec_inv[i] > 9)
		{
			printf("%c", t_dec_inv[i]);
		}
		else
		{
			printf("%lld", t_dec_inv[i]);
		}

	}
	printf("\n");
	
	// free(t_dec_inv);
}


int main()
{
	/*char test[50];
	scanf_s(" %s", test, int(sizeof(test)));
	printf("%s\n", test);		*/

	/*nt* a = (int*)malloc(sizeof(int) * 100);
	int* b = (int*)malloc(sizeof(int) * 100);
	char** s = (char**)malloc(sizeof(char*) * 100);
	if (a == NULL) return -1;
	if (b == NULL) return -1;
	if (s == NULL) return -1;

	for (int i = 0; i < 100; i++)
		s[i] = (char*)malloc(sizeof(char) * 100);*/
	
	int a[101] = { 0, };
	int b[101] = { 0, };
	char s[101][101] = { 0, };

	int cnt = 0;

	while (1)
	{
		scanf_s("%d", &a[cnt]);
		if (a[cnt] == 0)
			break;

		scanf_s(" %s", s[cnt], int(sizeof(s[cnt])));
		scanf_s(" %d\n", &b[cnt]);
		
		cnt++;
		if (cnt >= 100)
			break;
	}

	for (int i=0; i<cnt; i++)
		a2b(s[i], a[i], b[i]);
	
	
	/*for (int i=0; i<100; i++)
		free(s[i]);
	free(s);
	free(b);
	free(a);*/

	return 0;
}


