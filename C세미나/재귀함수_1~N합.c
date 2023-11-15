#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int N)
{
	int sum;
	if (N > 1)
	{
		sum = func(N - 1) + N;
	}
	else
	{
		return 1;
	}
	return sum;
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d\n", func(N));
}