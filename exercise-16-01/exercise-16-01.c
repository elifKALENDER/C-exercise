#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int a, b;
	float c;

	printf("Input the first value: ");
	scanf("%d", &a);
	printf("Input the second value: ");
	scanf("%d", &b);
	c = a / b;
	printf("%d/%d=%.2f\n", a, b, c);
	return 0;
}