#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
	DIR* folder;
	struct dirent* file;

	folder = opendir(".");
	if (folder == NULL)
	{
		puts("Unable to read directory");
		exit(1);
	}
	file = readdir(folder);
	printf("Found the file '%s'\n", file->d_name);
	closedir(folder);
	return 0;
}