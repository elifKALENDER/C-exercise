#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	char a, b, c;
	char* p;

	p = &a;
	*p = 'A';
	p = &b;
	*p = 'B';
	p = &c;
	*p = 'C';
	printf("Know your %c%c%cs\n", a, b, c);
	return 0;
}