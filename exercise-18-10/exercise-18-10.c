#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char lead;
	char* sidekick;

	lead = 'A';
	sidekick = &lead;

	printf("About varible 'lead':\n");
	printf("Size\t\t%zd%c\n",sizeof(lead));
	printf("Contents\t%c\n",lead);
	printf("Location\t%p\n",&lead);
	printf("About variaable 'sidekick':\n");
	printf("contents\t%p\n",sidekick);
	printf("Peek value\t%c\n",*sidekick);

	return 0;
}