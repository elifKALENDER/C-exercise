#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	const int size = 3;
	char name[size];

	printf("Who are you?");
	fgets(name, size, stdin);
	printf("Glad to meet you,%s.\n", name);
	return 0;
}