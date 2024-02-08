#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char choice;

	puts("Meal Plans: ");
	puts("A - Breakfast, Lumch, and Dinner");
	puts("B - Lunch and Dinner only");
	puts("C- - Dinner only");
	printf("Your choice: ");
	scanf("%c",&choice);

	printf("You've opted for ");
	switch (choice) 
	{
	case 'A':
		printf("Breakfast, ");
	case 'B':
		printf("Lunch and ")
	case 'C':
		printf("Dinner ");
	default:
		printf("As your meal plan.\n");
	}

}
