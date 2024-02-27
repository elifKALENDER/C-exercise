#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned char* junk;
	int x;

	junk = (unsigned char*)calloc(64, sizeof(char));
	if (junk == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	for (x = 0; x < 64; x++)
	{
		printf("%02x", *(junk + x));
		if ((x + 1) % 8 == 0)
			putchar('\n');
	}

	return 0;
}