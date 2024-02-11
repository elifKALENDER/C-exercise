#pragma warning(disable:4996)//scanf_s sorunu için


#include <stdio.h>

#define size 3

int main()
{
	char caesar[size][9] = {

		"Julius",
		"Agustus",
		"Nero"
	};
	int x;

	for (x = 0; x < size; x++)
		puts(caesar[x]);
	return 0;
}