#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int num[])
{
	int max = 0;
	
	for (int i = 0; i < 5; i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}
	}

	return max;
}
int main()
{
	int num[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	int max = func(num);
	
	printf("%d\n", max);
}