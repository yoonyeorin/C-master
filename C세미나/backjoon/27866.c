#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	char S[1001], ch;

	scanf("%s", S);
	scanf("%d", &i);

	ch = S[i - 1];

	printf("%c", ch);

	return 0;
}