#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char choice;

	puts("Meal Plans: ");
	puts("A - Breakfast, Lunch, and Dinner");
	puts("B - Lunch and Dinner only");
	puts("C- Dinner only");
	printf("Your choice:  ");
	scanf("%c",&choice);

	printf("You've opted for ");
	switch (choice)
	{
	case 'A':
	case 'a':
		printf("Breakfast, ");
	case 'B':
	case 'b':
		printf("Lunch and ");
	case 'C':
	case 'c':
		printf("Dinner ");
	default:
		printf("as your meal plan.\n");
	}
	return 0;
}
