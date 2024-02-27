#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* input;

	input = (char *)malloc(sizeof(char) * 1024);
	if (input == NULL)
	{
		puts("Unable to allocate buffer! Oh no!");
		exit(1);
	}

	puts("Type something long and boring: ");
	fgets(input, 1024, stdin);
	puts("you wrote: ");
	printf("\"%s\"\n", input);

	return 0;

}