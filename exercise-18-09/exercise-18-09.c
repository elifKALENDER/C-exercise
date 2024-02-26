#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char lead;
	char *sidekick;

	lead = 'A';
	sidekick = &lead;

	printf("About variable 'lead':\n");
	printf("Size\t\t%zd\n",sizeof(lead));
	printf("Contents\t%c\n",lead);
	printf("Location\t%p\n",&lead);
	printf("About variable 'sidekick':\n");
	printf("contents\t%p\n",sidekick);
	return 0;
}