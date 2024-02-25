#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <string.h>

int main()
{
	typedef struct id {

		char first[20];
		char last[20];
	} personal;

	typedef struct date {

		int month;
		int day;
		int year;
	} calendar;

	struct human {

		personal name;
		calendar birthday;
	};
	struct human president;

	strcpy(president.name.first, "George");
	strcpy(president.name.last, "Washington");
	president.birthday.month = 2;
	president.birthday.day = 22;
	president.birthday.year = 1732;
	printf("%s %s born on %d/%d/%d\n",\
		president.name.first,
		president.name.last,
		president.birthday.month,
		president.birthday.day,
		president.birthday.year);

	return 0;
}