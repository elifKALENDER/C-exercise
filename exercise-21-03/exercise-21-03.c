#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;

	time(&tictoc);
	printf("The time is now %s", ctime(&tictoc));
	return 0;
}