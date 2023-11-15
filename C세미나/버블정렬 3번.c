#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ary[5] = { 2, 4, 1, 5, 3 };
	int i, j, tmp = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (ary[j] < ary[j + 1])
			{
				tmp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ary[i]);
	}

	return 0;
}