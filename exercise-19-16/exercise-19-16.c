#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char *fruit[]=
	{
	"watermellon",
	"banana",
	"pear",
	"apple",
	"coconut",
	"grape",
	"blueberry"
	};
	int x;

	for (x = 0; x < 7; x++)
		puts(fruit[x]);
	return 0;
}