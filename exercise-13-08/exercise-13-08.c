#pragma warning(disable:4996)//scanf_s sorunu için


#include <stdio.h>
#include <string.h>

int main()
{
	char password[] = "taco";
	char input[15];

	printf("Password: ");
	scanf("%s", input);

	if (strcmp(input, password) == 0)
		puts("Password accepted");
	else
		puts("Invalid password.Alert the authorities.");

	return 0;
}