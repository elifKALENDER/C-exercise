#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int count;

	for (count = 11; count <= 19; count = count + 1) {
		printf("%d\t", count);
	}
	putchar('\n');
	return 0;
}