#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;

	tictoc = 9466684800;
	printf("the time is now %s", ctime(&tictoc));
	return 0;
}