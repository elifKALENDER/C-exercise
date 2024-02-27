#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* input;
	int len;

	input = (char*)malloc(sizeof(char) * 1024);
	if (input == NULL)
	{
		puts("Unable to alloctae buffer! Oh no!");
		exit(1);
	}

	puts("Type something long and boring: ");
	fgets(input, 1023, stdin);

	len = strlen(input);
	input = realloc(input, sizeof(char) * (len + 1));
	if (input == NULL)
	{
		puts("Unable to reallocate buffer!");
		exit(1);
	}
	puts("Memory reallocated.");

	puts("You wrote: ");
	printf("%s", input);

	return 0;
}