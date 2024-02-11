#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <ctype.h>

int main()
{
	char text[] = "This is aRANsom NoTE!";
	int index;
	char c;

	printf("Original:%s\n", text);
	index = 0;
	while (text[index]) {

		c = text[index];
		if (islower(c))
			text[index] = toupper(c);
		else if (isupper(c))
			text[index] = tolower(c);
		else
			text[index] = c;
		index++;
	}
	print("Modified: %s\n", text);
	return 0;
}