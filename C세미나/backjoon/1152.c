#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch[1000001];
	int i, cnt = 0;

	gets(ch);

	int len = strlen(ch);

	for (i = 0; i < len; i++)
	{
		if (ch[i] == 32)
		{
			cnt++;
		}
	}
	if (ch[0] == 32 || ch[len - 1] == 32)
	{
		cnt--;
	}
	if (ch[0] == 32 && ch[len - 1] == 32)
	{
		cnt--;
	}

	printf("%d", cnt + 1);

	return 0;
}