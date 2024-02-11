#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

#define size 6

int main()
{
	char caesar[size][9] = {

		"Julius",
		"Augustus",
		"Tiberitus",
		"Caligula",
		"Claudius",
		"Nero"
	};
	int x;

	for (x = 0; x < size; x++)
		puts(caesar[x]);
	return 0;
}