#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int a,b;

	b = 16;
	printf("Before, a is unsigned and b=%d\n", b);
	a = b++;
	printf("After, a=%d and b=%d\n", a, b);
	return 0;
}