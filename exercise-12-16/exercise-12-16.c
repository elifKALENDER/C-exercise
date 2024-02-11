#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

#define size 21

int main()
{
	char bubble[] = "C Programming is fun!";
	char temp;
	int inner, outer, x;

	puts("Original Array:");
	for (x = 0; x < size; x++)
		printf("%c", bubble[x]);
	putchar('\n');

	for(outer = 0; outer < size - 1; outer++) {

		for (inner=outer+1; inner < size - 1; inner++) {

			if (bubble[outer] > bubble[inner]) {

				temp = bubble[outer];
				bubble[outer] = bubble[inner];
				bubble[inner] = temp;
			}
		}
	}

	puts("Sorted Array: ");
	for (x = 0; x < size; x++)
		printf("%c", bubble[x]);
	putchar('\n');

	return 0;
}