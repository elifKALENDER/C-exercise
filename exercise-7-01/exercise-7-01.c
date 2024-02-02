
#include <stdio.h>

int main()
{
	int c;
	printf("I'm waiting for character: ");
	c = getchar();
	printf("I waited for the '%c' character.\n", c);
	return 0;
}