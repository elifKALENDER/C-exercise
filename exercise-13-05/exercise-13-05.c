#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <ctype.h>

int main()
{
	char answer;

	printf("Would you like to blow up to the moon?");
	scanf("%c", &answer);
	answer = toupper(answer);
	if (answer == 'Y')
		puts("BOOM!");
	else if (answer == 'N')
		puts("The moon is safe");
	else
		puts("Indecision can be fatal!");
	return 0;
}