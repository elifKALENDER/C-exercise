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
	scanf("5d", &highscore);
	fclose(handle);
	puts("Score saved");	
	return 0;

}