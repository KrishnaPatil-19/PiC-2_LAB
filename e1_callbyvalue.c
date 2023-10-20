#include <stdio.h>
int swap(int, int);
int main()
{
	int x = 10, y = 20;
	printf("\nx = %d, y = %d", x, y);
	swap(x, y);
	return 0;
}
int swap(x, y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("\nx = %d, y = %d", x, y);
	return 0;
}
