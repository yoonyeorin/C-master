#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int N)
{
	int sum = 0;
	for (int i = 0; i <= N; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int N;
	scanf("%d", &N);
	int sum = func(N);

	printf("%d\n", sum);
}