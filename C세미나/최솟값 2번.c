#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ary[5];
	int i, min = 100000;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ary[i]);

		if (ary[i] < min)
		{
			min = ary[i];
		}
	}
	printf("%d\n", min);

	return 0;
}