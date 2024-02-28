#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;

	tictoc = time(NULL);
	printf("The ime is now %d\n", tictoc);
	return 0;
}