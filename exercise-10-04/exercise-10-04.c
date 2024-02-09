#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

void prompt(void) {
	printf("C:\\DOS> ");
}

int main()
{
	int loop;
	char input[32];

	loop = 0;
	while (loop < 5) {
		prompt();
		fgets(input, 31, stdin);
		loop = loop + 1;
	}
	return 0;
}