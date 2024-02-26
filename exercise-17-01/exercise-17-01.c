#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

char* binbin(unsigned char n);

int main()
{
	unsigned input;

	printf("Type a value 0 to 255: ");
	scanf("%u", &input);
	printf("%u is binary %s\n",
		input, binbin((unsigned char)input));
	return 0;
}

char* binbin(unsigned char n)
{
	static char bin[9];
	int x;

	for (x = 0; x < 8; x++)
	{
		bin[x] = n & 0x80 ? '1' : '0';
		n <<= 1;
	}
	bin[x] = '\0';
	return (bin);
}