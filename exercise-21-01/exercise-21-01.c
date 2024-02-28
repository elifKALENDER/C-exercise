#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;

	time(&tictoc);
	printf("Time is now %lu\n", tictoc);
	return 0;
}