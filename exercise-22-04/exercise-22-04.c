#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fh;
	char buffer[64];

	fh = fopen("hello.txt", "r");
	if (fh == NULL)
	{
		puts("Can't open that fiile!");
		exit(1);
	}
	while (fgets(buffer, 64, fh))
		printf("%s", buffer);
	fclose(fh);
	return 0;
}