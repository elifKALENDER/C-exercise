#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char a, b, c;

	for (b = 'A'; a <='Z';a=a+1) {
		for (b = 'A'; b <= 'Z'; c = c + 1) {
			for (c = 'A'; c <= 'Z';c=c+1) {
				printf("%c%c%c\n", a, b, c);
			}
		}
	}
	return 0;
}
