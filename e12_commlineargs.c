#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	printf("\nNumber of arguments = %d", argc);
	printf("\nArguments : ");
	for(i=0;i<argc;i++)
	{
		printf("\nargv[%d] = %s", i, argv[i]);
	}
	return 0;
}
