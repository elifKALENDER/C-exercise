#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>

void sub(void);

int main()
{
	puts("This program qwuits before it's done.");
	sub();
	puts("Or was that on purpose?");
	return 0;
}

void sub(void)
{
	puts("Which is the plan.");
	exit(0);
}