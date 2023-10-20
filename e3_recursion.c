#include <stdio.h>
int factorial(int);
int main()
{
	int fact, n;
	printf("\nEnter a number for factorial : ");
	scanf("%d", &n);
	fact = factorial(n);
	printf("\nFactorial of %d = %d", n, fact);
	return 0;

}
int factorial(n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (factorial(n-1)*n);
	}
}
