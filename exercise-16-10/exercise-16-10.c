#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>


int main()
{
	enum{SUN, MON,TUE,WED, THU,FRI,SAT};
	int day;

	printf("Enter a weekday number,0-6: ");
	scanf("%d", &day);

	if (day < 0 || day>6)
	{
		puts("Invalid input");
	}
	else
	{
		switch (day)
		{
		case SUN:
			puts("Sunday");
			break;
		case MON:
			puts("Monday");
			break;
		case TUE:
			puts("Tuesday");
			break;
		case WED:
			puts("Wednesday");
			break;
		case THU:
			puts("Thursday");
			break;
		case FRI:
			puts("Friday");
			break;
		case SAT:
			puts("Saturday");
			break;
		};
	}
	return 0;   
}