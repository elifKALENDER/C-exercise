#pragma warning(disable:4996)//scanf_s sorunu i�in


#include <stdio.h>

int main()
{
	char sentence[] = "Random text";
	int index;

	index = 0;
	while (sentence[index] != '\0') {
		putchar(sentence[index]);
		index++;
	}
	putchar('\n');
	return 0;
}