#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a;
	a = 520;

	printf("a--=%d\n", a--);
	printf("a=%d\n", a);

	printf("--a=%d\n", --a);
	printf("a=%d\n", a);

	return 0;
}