#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int i;
	do {

		i = getchar();
		putchar(i);
	} while (i != '.');

	putchar('\n');

	return 0;
}