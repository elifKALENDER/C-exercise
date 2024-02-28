#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* handle;
	int highscore;

	handle = fopen("scores.dat", "w");
	if (!handle)
	{
		puts("File error!");
		exit(1);
	}
	printf("What is your high score? ");
	scanf("%d", &highscore);
	fwrite(&highscore, sizeof(int), 1, handle);
	fclose(handle);
	puts("Scoer saved");
	return 0;
}