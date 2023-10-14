#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, l, N;

	scanf("%d", &N);

	int star = 1;
	int space = N - 1;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < space; j++)
		{
			printf(" ");
		}
		for (l = 0; l < star; l++)
		{
			printf("*");
		}
		printf("\n");
		star = star + 2;
		space--;
	}

	return 0;
}