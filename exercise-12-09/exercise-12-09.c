#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	char firstname[16];

	printf("What is your name? ");
	fgets(firstname, 16, stdin);
	printf("Pleased to meet you,%s\n", firstname);
	return 0;
}