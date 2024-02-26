#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
int main()
{
	char string[] = ".does this string make me look fat?";

	printf("The string\"%s\ has a size of %lu.\n",
		string, sizeof(string));
	return 0;
}