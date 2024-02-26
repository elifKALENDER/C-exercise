#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

char* binbin(unsigned n);

int main()
{
	unsigned b, x;
	b = 0x11;

	for (x = 0; x < 8; x++)
	{
		printf("%s ox%04x %4\n",
			binbin(b), b, b);
		b <<= 1;
	}

	return 0;
}

char* binbin(unsigned n)
{
	static char bin[17];
	int x;

	for (x = 0; x < 16; x++)
	{
		bin[x] = n & 0x800 ? '1' : '0';
		n <<= 1;
	}
	bin[x] = '\0';
	return(bin);
}