#include <stdio.h>
int stat();
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		stat();
	}
	return 0;
}
int stat()
{
	static int x = 0;
	printf("\nx = %d", x++);
	return 0;
}
