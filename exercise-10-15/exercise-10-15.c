#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

#define TRUE 1
#define FALSE 0

void limit(int stop);
int verify(int check);

int main()
{
	int x;

	printf("Enter a stopping value (0-100): ");
	scanf("%d", &x);
	if (verify(x)) {
		limit(x);
	}
	else {
		printf("%d is out of range!\n", x);
	}
	return 0;
}

int verify(int check) {
	if (check < 0 || check>100)
		return FALSE;
	return TRUE;
}

void limit(int stop) {
	int x;

	for (x = 0; x <= 100; x = x + 1) {
		printf("%d", x);
		if (x == stop) {
			puts("You won!");
			return;
		}
	}
	puts("I won!");
}
