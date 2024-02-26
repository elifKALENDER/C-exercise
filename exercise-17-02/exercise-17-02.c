#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

char* binbin(unsigned n);

int main()
{
	unsigned input;

	printf("Type a value 0 to 65535: ");
	scanf("%u", &input);
	printf("%u is binary %s\n",
		input, binbin(input));
	return 0;
}

char* binbin(unsigned n)
{
	static char bin[17];
	int x;

	for (x = 0; x < 16; x++),
	{
		bin[x] = n & 0x800 ? '1' : '0';
	n <<= 1;
	}
	bin[x] = '\0';
	return(bin);
}