#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

void swap(int* a, int* b);

int main()
{
	int x = 100, y = 33;

	printf("Before swap: x=%d,y=%d\n", x, y);
	swap(&x, &y);
	printf("After swap: x=%d,y=%d\n", x, y);

	return 0;
}

void swap(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}