#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int fibo, nacci;

	fibo = 0;
	nacci = 1;

	do {
		printf("%d", fibo);
		fibo = fibo + nacci;
		printf("%d", nacci);
		nacci = nacci + fibo;
	} while (nacci < 300);

	putchar('\n');
	return 0;
}
