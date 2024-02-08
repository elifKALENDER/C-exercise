#pragma warning(disable:4996)//scanf_s sorunu için


#include <stdio.h>

int main()
{
	char code;

	printf("Enter the error letter(A,B,C":);
	scanf("%c", &code);
	switch (code)
	{
	case 'A':
		puts("Drive Fault,not your fault.");
		break;
	case 'B':
		puts("Illegal format,call a lawyer.");
		break;
	case 'C':
		puts("Bad filename, spank it.");
		break;
	default:
		puts("That's not A,B, or C")
	}
	return 0;
}

