#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	float sample1 = 34.5;
	float sample2 = 12.3456789;

	printf("%%9.1f=%9.1f\n", sample1);
	printf("%%8.1f=%8.1f\n", sample1);
	printf("%%7.1f=%7.1f\n", sample1);
	printf("%%6.1f=%6.1f\n", sample1);
	printf("%%5.1f=%5.1f\n", sample1);
	printf("%%4.1f=%4.1f\n", sample1);
	printf("%%3.1f=%3.1f\n", sample1);
	printf("%%2.1f=%2.1f\n", sample1);
	printf("%%1.1f=%1.1f\n", sample1);
	printf("%%9.1f=%9.1f\n", sample1);
	printf("%%9.2f=%9.2f\n", sample1);
	printf("%%9.3f=%9.3f\n", sample1);
	printf("%%9.4f=%9.4f\n", sample1);
	printf("%%9.5f=%9.5f\n", sample1);
	printf("%%9.6f=%9.6f\n", sample1);
	printf("%%9.7f=%9.7f\n", sample1);
	printf("%%9.8f=%9.8f\n", sample1);

	return 0;
}