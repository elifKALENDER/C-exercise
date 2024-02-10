#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int highscore1, highscore2, highscore3, highscore4;

	printf("Your highest score: ");
	scanf("%d", &highscore1);
	printf("Your second highest score: ");
	scanf("%d", &highscore2);
	printf("Your third highest score: ");
	scanf("%d", &highscore3);
	printf("Your fourth highest score: ");
	scanf("%d", &highscore4);

	return 0;
}