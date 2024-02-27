#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char alphabet[26];
	int x;
	char* pa;

	pa = alphabet;

	for (x = 0; x < 26; x++)
	{
		*pa++ = x + 'A';
	}

	pa = alphabet;

	for (x = 0; x < 26; x++)
	{
		putchar(*pa);
		pa++;
	}
	putchar('\n');

	return 0;
}