#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct stk {
		char symbol[5];
		int quantity;
		float price;
		struct stk* next;
	};
	struct stk* first;
	struct stk* current;

	first = (struct stk*)malloc(sizeof(struct stk) * 1);
	if (first == NULL)
	{
		puts("some kind ofmalloc() error");
		exit(1);
	}

	current = first;

	strcpy(current->symbol, "GOOG");
	current->quantity = 26;
	current->price = 1373.19;

	current->next = (struct stk*)malloc(sizeof(struct stk) * 1);
	if (current->next == NULL)
	{
		puts("Another malloc() error");
		exit(1);
	}
	current = current->next;
	strcpy(current->symbol, "MSFT");
	current->quantity = 67;
	current->next = NULL;

	puts("Inverstment Portfolio"),
		printf("symbol\tShares\tPrice\Value\n");
	current = first;
	while (current)
	{
		printf("%-6s\t%5d\t%.2f\t%.2f\n",
			current->symbol,
			current->quantity,
			current->price,
			current->quantity*current->price);
		current = current->next;
	}
	return 0;
}