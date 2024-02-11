#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

#define SIZE 5

void showarray(int array[]);
void arrayinc(int array[]);

int main()
{
	int n[] = { 2,3,4,7,11 };

	puts("Here's your array: ");
	showarray(n);
	arrayinc(n);
	puts("After calling the arrayinc() function:");
	showarray(n);
	return 0;
}

void showarray(int array[]) {

	int x;

	for (x = 0; x < SIZE; x++)
		printf("%d", array[x]);
	putchar('\n');

}

void arrayinc(int array[]) {

	int x;

	for (x = 0; x < SIZE; x++)
		array[x]++;

}//

