#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	struct robot {
		int alive;
		char name[5];
		int xpos;
		int ypos;
		int strength;
	};

	printf("The evil robot struct size is %lu\n",
		sizeof(struct robot));
	return 0;
}