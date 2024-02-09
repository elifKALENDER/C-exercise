#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int cinq;

	for (cinq = 5; cinq < 101; cinq += 5)
		printf("%d\n", cinq);
	return 0;
}