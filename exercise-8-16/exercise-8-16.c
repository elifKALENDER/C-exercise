#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	char yorn;

	printf("Do you want to conmtinue (Y/N)?");
	scanf("%c", &yorn);
	if (yorn == 'Y' || yorn == 'y') {
		puts("continuing...");
	}
	else if (yorn == 'N' || yorn == 'n') {
		puts("Stopping now.");
	}
	else {
		puts("You didn't type Y or N!");
	}
	return 0;
}
