#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input, i;

	scanf("%d", &input);

	printf("<%d��>\n", input);
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", input, i, input * i);
	}

	return 0;
}