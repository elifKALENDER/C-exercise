#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	char* fruit[] = {
		"watermelon",
		"banana",
		"pear",
		"apple",
		"coconut",
		"grape",
		"blueberry"
	};
	int x;

	for (x = 0; x < 7; x++)
	{
		putchar(**(fruit + x));
		putchar('\n');
	}

	return 0;
}