#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned seed;
	int r, a, b;

	printf("Input a random number seed: ");
	scanf("%u", &seed);
	srand(seed);
	for (a = 0; a < 20; a++) {
		for (b = 0; b < 5; b++) {
			r = rand();
			printf("%d\t", r);
		}
		putchar('\n');
	}
	return 0;
}