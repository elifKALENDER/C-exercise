#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>
#include <ctype.h>

int main()
{
	char answer;

	printf("Would you like to blow up the moon?");
	scanf("%c", &answer);
	answer = toupper(answer);
	if (answer == 'Y')
		puts("BOOM!");
	else if (answer == 'N')
		puts("The moon is safe");
	else
		puts("Indecision can be ftal!");

	return 0;
}