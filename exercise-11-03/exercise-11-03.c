#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int c;

	for (c = -5; c < 5; c++);
		printf("%d", c);

	for (; c >= -5; c--);
		printf("%d", c);
	putcahr('\n');
	return 0;
}