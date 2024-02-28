#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* handle;
	int highscore[5];
	int x;

	handle = fopen("scores.dat", "W");
	if (!handle)
	{
		puts("File error!");
		exit(1);
	}
	for (x = 0; x < 5; x++)
	{
		printf("High score #%d?", x + 1);
		scanf("%d", &highscore[x]);
	}
	fwrite(highscore, sizeof(int), 5,handle);
	fclose(handle);
	puts("Scores saved");
	return 0;

}