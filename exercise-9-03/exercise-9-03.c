#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int count;

	for (count = -5; count < 6; count = count + 1) {
		printf("%d\n", count);
	}
	return 0;
}