
#include <stdio.h>

int main()
{
	int c;
	printf("I'm waiting for a character: ");
	c = getchar();//get ASCII number
	printf("I waited for the '%d' character.\n", c);
	return 0;
}
