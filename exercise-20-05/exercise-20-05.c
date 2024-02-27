#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>
#include <stdlib.h>

//#define bufsize 1024

int main()
{
	const int bufsize = 1024;
	char* input, * output, * i, * o;

	input = (char*)malloc(sizeof(char) * bufsize);
	output = (char*)malloc(sizeof(char) * bufsize);
	if (input == NULL || output == NULL)
	{
		puts("Unable to allocate buffer! Oh no!");
		exit(1);
	}

	puts("Type something long and borring: ");
	fgets(input, bufsize, stdin);
	i = input;
	o = output;
	while (*i != '\n')
	{
		*o = *i;
		o++;
		i++;
	}
	*o = '\0';

	puts("You wrote: ");
	printf("\"%s\"\n", output);

	return 0;
}