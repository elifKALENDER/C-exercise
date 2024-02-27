#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int array[5] = { 2,3,5,7,11 };

	printf("'array' is at address %p\n", &array);
	return 0;
}