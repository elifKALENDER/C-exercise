#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>


int main()
{
	int array[] = { 100,200,300,400,500 };
	int x;

	for (x = 0; x < 5; x++)
		printf("%d at %p\n", array[x], &array[x]);
	return 0;
}