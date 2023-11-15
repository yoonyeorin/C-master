#include <stdio.h>

int add(int a, int b)
{
	int c = a - b;
	return c;
}
int func(int a, int b)
{
	int d = a * b;
	return d;
}
int fun(int a, int b)
{
	int f = a / b;
	return f;
}
int main()
{
	int a = 50, b = 40;
	int c = add(a, b);
	int d = func(a, b);
	int f = fun(a, b);
	printf("%d %d %d\n", c, d, f);
}