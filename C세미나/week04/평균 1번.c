#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ary[5];
	int i, total = 0, avg = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ary[i]);
		 
		total = total + ary[i];
		printf("%d ", ary[i]);
	}
	printf("\n");
	avg = total / 5;

	printf("ЦђБе : %d\n", avg);

	return 0;
}