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

	strcpy(bond.actor, "Sean Connery");
	bond.year = 1962;
	strcpy(bond.title, "Dr.No");

	jbdb = fopen("bond.db", "w");
	if (!jbdb)
	{
		puts("SPECTRE wins!");
		exit(1);
	}
	fwrite(&bond, sizeof(struct agent), 1, jbdb);
	fclose(jbdb);
	puts("Record written");

	return 0;
}