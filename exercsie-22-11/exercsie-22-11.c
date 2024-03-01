#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
	char filename[255];
	FILE* dumpme;
	int x, c;

	if (argc < 2)
	{
		printf("File to dump: ");
		scanf("%s", filename);
	}
	else
	{
		strcpy(filename, argv[1]);
	}
	dumpme = fopen(filename, "r");
	if (!dumpme)
	{
		printf("Unable to open '%s'\n", filename);
		exit(1);
	}

	x = 0;
	while (!feof(dumpme))
	{
		c = fgetc(dumpme);
		if (c == EOF)
			break;
		printf("%02X", c);
		x++;
		if (!(x % 16))
			putchar('\n');
	}
	putchar('\n');
	fclose(dumpme);

	return 0;
}