#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

void showarray(int array[]);

int main()
{
	int n[] = { 2,3,5,7,11 };

	puts("Here's your array: ");
	showarray(n);
	return 0;
}

void showarray(int array[]) {

	int x;

	for(x = 0; x < 5; x++)
		rintf("%d", array[x]);
	putchar('\n');
}