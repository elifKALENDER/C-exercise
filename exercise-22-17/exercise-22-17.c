#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct lili {
	int value;
	struct lili* next;
};
struct lili* first;
struct lili* current;

int menu(void);
void add(void);
void show(void);
void delrec(void);
struct lili* create(void);
void load(char *file);
void save(char *file);

int main()
{
	char filename[] = "linked.list";
	int choice = '\0';
	first = NULL;

	load(filename);

	while(choice != 'Q')
	{
		choice = menu();
		switch (choice)
		{
		case 'S':
			show();
			break;
		case 'A':
			add();
			break;
		case 'R':
			delrec();
			break;
		case 'Q':
			break;
		}
	}

	save(filename);
	return 0;
}

int menu(void)
{
	int ch;
	printf("S)how A)dd,R)emove,Q)uit: ");
	ch = getchar();
	while (getchar() != '\n')
		;
	return(toupper(ch));
}
void add(void)
{
	if (first == NULL)
	{
		first = create();
		current = first;
	}
	else
	{
		current = first;
		while (current->next)
			current=current->next;
		current->next = create();
		current = current->next;
	}
	printf("Type a value: ");
	scanf("%d", &current->next);
	current->next = NULL;
	while (getchar() != '\n')
		;
}


void show(void)
{
	int count = 1;
	if (first == NULL)
	{
		
		puts("Nothing to show");
		return;
	}
	puts("Showing all records: ");
	current = first;

	while (current)
	{
		printf("Record %d: %d\n",
			count, current->value);
		current = current->next;
		count++;
	}
}

void delrec(void)
{
	struct lili* previous;
	int r, c;
	if (first == NULL)
	{
		puts("No records to remove");
		return;
	}

	puts("Choose a record to remove: ");

	show();
	printf("Record: ");
	scanf("%d", &r);

	while (getchar() != '\n')
		;
	c = 1;

	current=first;
	previous = NULL;
	while (c != r)
	{
		previous = current;
		current = current->next;
		c++;

		if (current == NULL)
		{
			puts("Recor not found");
			return;
		}
	}

	if (previous == NULL)
		first = current->next;
	else
		previous->next = current -> next;

	printf("Record %d removed .\n", r);

	free(current);
}

struct lili* create(void)
{
	struct lili* a;
	a = (struct lili*)malloc(sizeof(struct lili) * 1);
	if (a == NULL)
	{
		puts("Some kind of malloc() error ");
		exit(1);
	}

	return a;
}

void load(char* file)
{
	FILE* fp;
	struct lili loaded;
	int r, records;
	fp = fopen(file, "r");

	if (fp == NULL)
		return;

	records = 0;

	while (!feof(fp))
	{
		r = fread(&loaded, sizeof(struct lili), 1, fp);
		if (r == 0)
			break;
		if (first == NULL)
		{
			first == create();
			current = first;
		}
		else
		{
			current = first;
			while (current->next)
				current = current->next;
			current->next = create();
			current = current->next;
		}

		current->value = loaded.value;
		current->next = NULL;
		records++;
	}
	fclose(fp);
	printf("%d records read from '%s'\n", records, file);
}

void save(char* file)
{
	int records;
	FILE* fp;

	fp = fopen(file, "w");
	if (fp == NULL)
	{
		printf("Unable to create '%s'\n", file);
		return;
	}
	records = 0;
	current = first;

	while (current)
	{
		fwrite(current, sizeof(struct lili), 1, fp);
		current = current->next;
		records++;
	}

	fclose(fp);
	printf("%d recordss written\n", records);
}