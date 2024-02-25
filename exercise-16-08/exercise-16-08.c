#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 5

struct bot {

	int xpos;
	int ypos;
};

struct bot initialize(struct bot b);

int main()
{
	//const int size = 5;
	struct bot robots[size];
	int x;

	srand((unsigned)time(NULL));

	for (x = 0; x < size; x++)
	{
		robots[x] = initialize(robots[x]);
		printf("Robot %d: Coordinates: %d,%d\n",
			x + 1, robots[x].xpos, robots[x].ypos);
	}
	return 0;
}

struct bot initialize(struct bot b)
{
	int x, y;

	x = rand();
	y = rand();
	x %= 20;
	y %= 20;

	b.xpos = x;
	b.ypos = y;
	return b;
}