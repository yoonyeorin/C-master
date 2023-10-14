#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i, j, l, k;

	scanf("%d", &N);

	int space = (2 * N) - 2;

	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		for (l = 0; l < space; l++)
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
		space = space - 2;
	}

	space = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - i; j++)
		{
			printf("*");
		}
		for (l = 0; l < space; l++)
		{
			printf(" ");
		}
		for (k = 0; k < N - i; k++)
		{
			printf("*");
		}
		printf("\n");
		space = space + 2;
	}

	return 0;
}