#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	struct president {

		char name[40];
		int year;
	} first = {
		"George Washington",
		1789
	}, second = {
			"Jhon Adams",
			1897
	};

	printf("The first president was %s\n", first.name);
	printf("He was inaugurated in %d\n", first.year);
	printf("The second president in %s\n", second.name);
	printf("He was inaugurated in %d\n", second.year);

	return 0;
}