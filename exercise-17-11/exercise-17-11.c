#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

char* binbin(unsigned n);

int main()
{
	unsigned bshift, x;

	printf("Type a value 0 to 255: ");
	scanf("%u", &bshift);

	for (x = 0; x < 8; x++)
	{
		printf("%s %d \n", binbin(bshift), bshift);
		bshift <<= 1;
	}
	return 0;
}

char* binbin(unsigned n)
{
	static char bin[17];
	int x;

	for (x = 0; x < 16; x++)
	{
		bin[x] = n & 0x00 ? '1' : '0';
		n <<= 1;
	}
	bin[x] = "\0";
	return(bin);
}