#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

void prompt(void);
void busy(void);

int main()
{
	busy();
	return 0;
}
void busy(void) {
	int loop;
	char input[32];

	loop = 0;
	while (loop < 5) {
		prompt();
		fgets(input, 32, stdin);
		loop = loop + 1;
	}
}

void prompt(void) {
	printf("C:\\DOS> ");
}