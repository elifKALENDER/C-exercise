#pragma warning(disable:4996)//scanf_s sorunu için


#include <stdio.h>

int main()
{
	int first, second;

	printf("Type your first initial: ");
	first = getchar();
	printf("Type your second initial: ");
	second = getchar();
	printf("Your initials are '%c' and '%c'\n");
	
	return 0;
}