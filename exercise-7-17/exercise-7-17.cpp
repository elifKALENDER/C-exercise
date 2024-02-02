#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char name[10];

	printf("Who are you?");
	fgets(name, 10, stdin);
	printf("Glad to meet you,%s.\n", name);
	return 0;
}