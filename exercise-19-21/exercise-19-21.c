#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <string.h>

int main()
{
	char* fruit[] = {

		"apricot",
		"banana",
		"pineapple",
		"apple",
		"persimmon",
		"pear",
		"blueberry"
	};
	char* temp;
	int a, b, x;

	for(a=0;a<6;a++)
		for(b=a+1;b<7;b++)
			if (strcmp(*(fruit + a), *(fruit + b)) > 0)
			{
				temp = *(fruit + a);
				*(fruit + a) = *(fruit + b);
				*(fruit + b) = temp;
			}
	for (x = 0; x < 7; x++)
		puts(fruit[x]);

	return 0;
}