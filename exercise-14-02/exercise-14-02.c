#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	struct player {

		char name[32];
		int highscore;
		float hours;
	};
	struct player xbox;

	printf("Enter the player's name: ");
	scanf("%s", xbox.name);
	printf("Enter their high score: ");
	scanf("%d", &xbox.highscore);
	printf("Enter the hours played: ");
	scanf("%f", &xbox.hours);

	printf("Player %s has aa high score of %d\n",
		xbox.name, xbox.hours);

	return 0;
}