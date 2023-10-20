#include <stdio.h>
int add(int, int);
int main()
{
	int a, b, res = 0;
	int (*ip)(int, int);
	printf("\nEnter values of a & b : ");
	scanf("%d%d", &a, &b);
	ip = &add;
	res = (*ip)(a, b);
	printf("\n%d + %d = %d", a, b, res);
	return 0;
}
int add(a, b)
{
	int c = a + b;
	return c;
}
