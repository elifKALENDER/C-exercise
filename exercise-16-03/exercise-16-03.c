#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

typedef int stinky;

int main()
{
	stinky a = 2;

	printf("Everyone knows that ");
	printf("%d+%d=%d\n", a, a, a + a);
	return 0;
}