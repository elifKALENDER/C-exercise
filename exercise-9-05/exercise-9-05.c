#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int duo;

	for (duo = 2; duo <= 100; duo = duo + 2) {
		printf("%d\t", duo);
	}
	putchar('\n');
	return 0;
}
