#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>


int main()
{
	char c = 'c';
	int i = 123;
	float f = 98.6;
	double d = 6.022E23;

	printf("adress of 'c' %p\n", &c);
	printf("adress of 'i' %p\n", &i);
	printf("adress of 'f' %p\n", &f);
	printf("adress of 'd' %p\n", &d);
	return 0;
}