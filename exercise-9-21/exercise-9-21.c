#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int a;
	char c;

	for (a = 1, c = 'z'; a < 5; a = a + 1, c = c - 1)
		printf("%d%c\n", a, c);
	return 0;
}