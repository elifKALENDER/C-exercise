#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

char* binbin(unsigned char n);

int main()
{
	int a, x, r;

	a = 73;
	x = 170;

	printf(" %s %3d\n",
		binbin((unsigned char)a), a);
	printf("^ %s %3d\n",
		binbin((unsigned char)x), x);
	r = a ^ x;
	printf("=%s %3d\n",
		binbin((unsigned char)r), r);
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