#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int x;
	
	for (x = 0; x < 10; x = x + 1, printf("%d\n", x));
	return 0;
}