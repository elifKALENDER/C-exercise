#pragma warning(disable:4996)//scanf_s sorunu için


#include <stdio.h>

int main()
{
	char password[] = "taco";
	char input[15];
	int match;

	printf("Password: ");
	scanf("%s", input);

	match = strcmp(input, password);
	if (match == 0)
		puts("Password acepted");
	else
		puts("Invalid password.Alert teh authorities.");
	return 0;
}