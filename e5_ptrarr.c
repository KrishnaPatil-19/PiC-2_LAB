#include <stdio.h>
int main()
{
	int arr[4] = {1,2,3,4}, *ptr[4], i;
	for(i=0;i<=3;i++)
	{
		ptr[i] = &arr[i];
	}
	for(i=0;i<=3;i++)
	{
		printf("\narr[%d] = %d \nptr[%d] = %d", i, arr[i], i, *ptr[i]);
	}
	return 0;
}
