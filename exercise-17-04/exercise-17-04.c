#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	char input[64];
	int ch;
	int x = 0;

	printf("Type in ALL CAPS: ");
	fgets(input, 63, stdin);

	while (input[x] != '\n')
	{
		ch = input[x] | 32;
		putchar(ch);
		x++;
	}
	putchar('\n');
	return 0;
}