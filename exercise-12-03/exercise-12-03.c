#pragma warning(disable:4996)//scanf_s sorunu için


#include <stdio.h>

int main()
{
	int highscore[4];

	printf("Your highest score: ");
	scanf("%d", &highscore[0]);
	printf("Your second highest score: ");
	scanf("%d", &highscore[1]);
	printf("Your third highest score: ");
	scanf("%d", &highscore[2]);
	printf("Your highest score: ");
	scanf("%d", &highscore[3]);
	//printf("Your highest score: ");
	//scanf("%d", &highscore[4]);

	puts("Hee are nyour high scores");
	printf("#1 %d\n", highscore[0]);
	printf("#2 %d\n", highscore[1]);
	printf("#3 %d\n", highscore[2]);
	printf("#4 %d\n", highscore[3]);

	return 0;
}