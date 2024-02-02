

#include <stdio.h>

int main()
{
	int c;

	printf("I'm waiting for a character: ");
	c = getc(stdin);
	printf("I waited for the '%c' character.\n", c);
	return 0;
}

