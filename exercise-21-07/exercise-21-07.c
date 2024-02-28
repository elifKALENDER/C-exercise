#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;
	struct tm* today;

	time(&tictoc);
	today = localtime(&tictoc);
	printf("It's now %d:%02d:%02d\n",
		today->tm_hour,
		today->tm_min,
		today->tm_sec);
	return 0;
}