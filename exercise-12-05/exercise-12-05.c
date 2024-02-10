#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int highscore[10];
	int x;

	for (x = 0; x < 10; x++) {
		printf("Your #%d score: ", x + 1);
		scanf("%d", &highscore[x]);
	}
	
	puts("Here are your high scores");
	for (x = 0; x < 10; x++)
		printf("#%d %d\n", x + 1, highscore[x]);

	return 0;
}