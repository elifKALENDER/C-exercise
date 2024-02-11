#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char firstname[16], lastname[16];

	printf("What is first name? ");
	scanf("%15s", firstname);
	printf("What is your last name ");
	scanf("%15s", lastname);
	printf("Pleased to meet you, %s %s\n", firstname, lastname);

	return 0;
}