#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* a, x;

	a = (int*)malloc(sizeof(int) * 3);
	if (a == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	for (x = 0; x < 3; x++)
	{
		*(a + x) = (x + 1) * 100;
		printf("%d\n", *(a + x));
	}
	return 0;
}