#pragma warning(disable:4996)//scanf_s sorunu için

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