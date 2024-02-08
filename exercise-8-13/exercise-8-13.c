#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int first, second;

	printf("Input the first value: ");
	scanf("%d", &first);,
		printf("Input the second value : ");
	scanf("%d", &second);

	puts("Evaluating ...");
	if (first < second) {
		printf("%d is less than %d\n", first, second);
	}
	else if (first > second) {
		printf("%d is greater than %d\n", first, second);

	}
	else {
		printf("%d is equal to %d\n", first, second);
	}
	return 0;
}