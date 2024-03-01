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
	jbdb = fopen("bond.db", "r");
	if (!jbdb)
	{
		puts("SPECTRE wins!"),
			exit(1);
	}

	fseek(jbdb, sizeof(struct agent) * 1, SEEK_SET);
	fread(&bond, sizeof(struct agent), 1, jbdb);
	printf("%s\t%d\t%s\n",
		bond.actor,
		bond.year,
		bond.title);
	fclose(jbdb);

	return 0;

}
