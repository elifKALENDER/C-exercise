#pragma warning(disable:4996)//scanf_s sorunu i�in
#include <stdio.h>

int main()
{
	char firstname[15];

	printf("Type your first name: ");
	scanf("%s", firstname);
	printf("Pleased to meet you,%s.\n", firstname);
	return 0;
}