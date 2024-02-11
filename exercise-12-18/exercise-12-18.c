#pragma warning(disable:4996)//scanf_s sorunu için


#include <stdio.h>

#define size 3

int main()
{
	//int const size = 3;
	char ceaser[size][9] = {

		"Julius",
		"Agustus",
		"Nero"
	};
	int x, index;

	for (x = 0; x < size; x++) {

		index = 0;
		while (ceaser[x][index] != '\0') {

			putcahr(ceaser[x][index]);
			index++;
		}
		putchar('\n');
	}
	return 0;
}