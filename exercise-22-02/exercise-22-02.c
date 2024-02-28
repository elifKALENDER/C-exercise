#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fh;
	int ch;

	fh = fopen("hello.txt", "r");

	if (fh == NULL)
	{
		puts("Can't open that file!");
	}

	while (!feof(fh))
	{
		ch = fgetc(fh);
		if (ch == EOF)
			break;;
		putchar(ch);

	}
	fclose(fh);
	return 0;
}