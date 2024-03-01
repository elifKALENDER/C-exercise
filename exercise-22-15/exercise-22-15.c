#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct agent {
		char actor[32];
		int year;
		char title[32];
	};
	struct agent bond;
	FILE* jbdb;
	int r;

	jbdb = fopen("bond.db", "r");
	if (!jbdb)
	{
		puts("SPECTRE wins!");
		exit(1);
	}

	puts("First read-through: ");
	while (!feof(jbdb))
	{
		printf("%ld:\t", ftell(jbdb));
		r = fread(&bond, sizeof(struct agent), 1, jbdb);
		if (r == 0)
			break;
		printf("%s\t%d\t%s\n",
			bond.actor,
			bond.year,
			bond.title);
	}

	rewind(jbdb);

	puts("Second read-through: ");
	while (!feof(jbdb))
	{
		printf("%ld:\t", ftell(jbdb));
		r = fread(&bond, sizeof(struct agent), 1, jbdb);
		if (r == 0)
			break;
		printf("%s\t%d\t%s\n",
			bond.actor,
			bond.year,
			bond.title);
	}

	fclose(jbdb);
	return 0;
	
}