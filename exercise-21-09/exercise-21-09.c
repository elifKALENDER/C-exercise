#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;
	struct tm* today;
	char* weekday[] = {
		"Sunday","Monday","Tuesday","Wednesday",
		"Thursday","Friday","Saturday"
	};

	time(&tictoc);
	today = localtime(&tictoc);
	printf("Today is %s\n", weekday[today->tm_wday]);
	return 0;
}