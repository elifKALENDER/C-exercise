#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	struct scores {

		char name[32];
		int score;
	};
	struct scores player[4];
	struct scores temp;
	int x, a, b;

	for (x = 0; x < 4; x++) {

		printf("Enter player %d ", x + 1);
		scanf("%s", player[x].name);
		printf("Enter their score: ");
		scanf("%d", &player[x].score);
	}

	for(a=0;a<3;a++)
		for(b=a+1;b<4;b++)
			if (player[a].score < player[b].score) {

				temp = player[a];
				player[a] = player[b];
				player[b] = temp;
			}
	puts("Player Info");
	printf("#\tName\tScore\n");
	for (x = 0; x < 4; x++) {

		printf("%d\t%s\t%5d\n",
			x + 1, player[x].name, player[x].score);
	}
	return 0;
}