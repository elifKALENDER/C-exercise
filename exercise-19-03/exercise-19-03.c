#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	char c = 'c';
	int i = 123;
	float f = 98.6;
	double d = 6.022E23;

	printf("Address of 'c' %p\n",c);
	printf("Address of 'i' %p\n",i);
	printf("Address of 'f' %p\n",f);
	printf("Address of 'd' %p\n",d );
	return 0;
}