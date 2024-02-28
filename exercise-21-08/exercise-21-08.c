#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;
	struct tm* today;

	time(&tictoc);
	today = localtime(&tictoc);
	printf("It's now ");
	if (today->tm_hour > 12)
		printf("%d:", today->tm_hour - 12);
	else
		printf("%d:", today->tm_hour);
	printf("%02d:%02d",
		today->tm_min,
		today->tm_sec);
	printf("%s\n",
		today->tm_hour > 11 ?
		"P.M." : "A.M.");
	return 0;
}