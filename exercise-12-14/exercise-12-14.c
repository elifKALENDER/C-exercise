#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 40


int main()
{
	//const int size = 40;
	int bubble[size];
	int inner, outer, temp, x;

	srand((unsigned)time(NULL));

	puts("Original Array: ");
	for (x = 0; x < size; x++) {
		bubble[x] = rand() % 100 + 1;
		printf("%d\t", bubble[x]);
	}
	putchar('\n');

	for (outer = 0; outer < size - 1; outer++) {
		for (inner = outer + 1; inner < size; inner++) {
			if (bubble[outer] > bubble[inner]) {
				temp = bubble[outer];
				bubble[outer] = bubble[inner];
				bubble[inner] = temp;
			}
		}
	}

	puts("Sorted Array:");
	for (x = 0; x < size; x++)
		printf("%d\t", bubble[x]);
	putchar('\n');

	return 0;
}