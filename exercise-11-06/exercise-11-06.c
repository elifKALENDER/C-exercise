#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int a, b;

	b = 16;
	printf("Before, a is unassigned and b=%d\n", b);
	a = ++b;
	printf("After, a=%d nd b=%d\n", a, b);
	return 0;
}