#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char a, b, c;
	char* p;

	a = 'A'; b = 'B'; c = 'C';

	printf("Know your ");
	p = &a;
	putchar(*p);
	p = &b;
	putchar(*p);
	p = &c;
	putchar(*p);
	printf("s\n");

	return 0;
}