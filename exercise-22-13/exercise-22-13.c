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

	struct agent bond2;
	struct agent bond3;
	FILE* jbdb;

	jbdb = fopen("bond.db", "a");
	if (!jbdb)
	{
		puts("SPECTURE wins!");
		exit(1);
	}

	strcpy(bond2.actor, "Roger Moore");
	bond2.year = 1973;
	strcpy(bond2.title, "Live and Let Die!");
	fwrite(&bond2, sizeof(struct agent), 1, jbdb);

	strcpy(bond3.actor, "Pierce Brosnan");
	bond3.year = 1995;
	strcpy(bond3.title, "GoldenEye");
	fwrite(&bond3.title, sizeof(struct agent), 1, jbdb);

	fclose(jbdb);
	puts("Records written");

	return 0;
}