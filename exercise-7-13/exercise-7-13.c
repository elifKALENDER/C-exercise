#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char firstname[15];
	char lastname[15];

	printf("Type your first name: ");
	scanf_s("%s", firstname);
	printf("Type your last name: ");
	scanf_s("%s", lastname);
	printf("Pleased to meet you,%s %s.\n", firstname, lastname);
	return 0;
}

