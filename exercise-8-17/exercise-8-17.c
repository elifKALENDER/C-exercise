#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	int code;

	printf("Enter the error code(1-3: ");
	scanf("%d", &code);
	switch (code)
	{
	case 1:
		puts("Drive Fault,not your fault.");
		break;
	case 2:
		puts("Illegal format, call a lawyer.");
		break;
	case 3:
		puts("Bad filename, spank it.");
		break;
	default:
		puts("That's not 1, 2, or 3");
	}
	return 0;
}

