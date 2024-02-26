#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int age;
	float weight;
	int* a;
	float* w;

	a = &age;
	w = &weight;

	*a = 39;
	*w = 83.9;

	printf("You are %d years old", age);
	printf("and you weigh %.1f kilos.\n", weight);

	return 0;
}