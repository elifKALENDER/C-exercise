#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("Greetings, %s!\n", argv[1]);
	return 0;
}