#include <stdio.h>
int main()
{
	int a = 10, *p, **pp;
	p = &a;
	pp = &p;
	/*printf("\nValue at a = %d", a);
	printf("\nAddress of a at p = %x", p);
	printf("\nValue at p = %d", *p);
	printf("\nAddress of p at pp = %x", pp);
	printf("\nValue at pp = %d", **pp);*/
	printf("\na = %d", a);
	printf("\n&a at p = %x", p);
	printf("\n*p = %d", *p);
	printf("\n&p at pp = %x", pp);
	printf("\n**pp = %d", **pp);
	return 0;
}
