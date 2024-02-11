#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <ctype.h>

int main()
{
	char phrase[] = "When in the Course of human events, it becomes necessary for one people to dissolve the political bands which have connected them with another, and to assume among the poers of the erath, the separate and equal station to which the Laws of Bature and of Nature's  God entitle them, adecent respect to the options of mankind requires that they should declare the causes which impel them to the separation ";
	int index;
	int alpha, blank, punct;
	alpha = blank = punct = 0;

	index = 0;
	while (phrase[index]) {

		if (isalpha(phrase[index]))
			alpha++;
		if (isblank(phrase[index]))
			blank++;
		if (ispunct(phrase[index]))
			punct++;
		index++;
	}

	printf("\"%s\"\n", phrase);
	puts("Statistics:");
	printf("%4d alphabetic characters\n", alpha);
	printf("%4d blanks\n", blank);
	printf("%4d punctuation symbols\n,punct");

	return 0;
}