#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	const int secret = 17;
	int guess;

	printf("Can you guess the secret number: ");
	scanf("%d", &guess);
	if (guess == secret) {
		puts("You guessed it!");
		return 0;
	}
	if (guess != secret) {
		puts("Wrong!");
		return 1;
	}
}

