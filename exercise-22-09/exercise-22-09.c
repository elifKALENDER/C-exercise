#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* handle;
	int highscore[5];
	int x;
	handle = fopen("scores.dat", "r");

	if (!handle)
	{
		puts("File error!");
		exit(1);
	}
	fread(highscore, sizeof(int), 5, handle);
	fclose(handle);
	for (x = 0; x < 5; x++)
		printf("High score #%d: %d\n", x + 1, highscore[x]);
	return 0;
}
