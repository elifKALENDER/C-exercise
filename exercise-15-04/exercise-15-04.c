#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main(int argc,char *argv[])
{
	int x;
	for (x = 0; x < argc; x++)
		printf("Arg#%d=%s\n", x + 1, argv[x]);
	return 0;
}