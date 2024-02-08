#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int a, b;

	a = 6;
	printf("Type a value: ");
	scanf("%d", &b);
	if (a > b) {
		printf("%d is greater than %d\n", a, b);
	}
	else {
		printf("%d is not greater than %d\n", a, b);
	}
	return 0;
}