#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int d;

	d = -10;
	while (d < 10) {
		printf("%d", d);
		d++;
	}
	while (d >= -10) {
		printf("%d", d);
		d--;
	}
	putchar('\n');
	return 0;
}