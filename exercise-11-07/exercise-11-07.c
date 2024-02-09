#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	const int value = 5;
	int a;

	printf("Modulus %d:\n", value);
	for (a = 0; a < 30; a++)
		printf("%d %% %d=%d\n", a, value, a % value);
	return 0;
}