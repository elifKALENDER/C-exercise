

#include <stdio.h>

int main()
{
	char firstname[15];
	char lastname[15];

	printf("Type your first name: ");
	fgets(firstname, 15, stdin);
	printf("Type your last name: ");
	fgets(lastname, 15, stdin);
	printf("Pleased to meet you,%s %s.\n", firstname, lastname);
	return 0;
}

