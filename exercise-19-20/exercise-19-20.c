#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	char* fruit[] =
	{
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
			if (*(fruit + a) > *(fruit + b))
			{
				temp = *(fruit + b);
				*(fruit + a) = *(fruit + b);
				*(fruit + b) = temp;
			}
	for (x = 0; x < 7;x++)
		puts(fruit[x]);	

	return 0;
}