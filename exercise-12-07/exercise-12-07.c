#pragma warning(disable:4996)//scanf_s sorunu için


#include <stdio.h>
#include <math.h>

#define size 7

int main()
{
	//const int size = 7;
	int first[] = { 10,12,14,15,16,18,20 };
	float second[size];
	int x;

	for (x = 0; x < size; x++)
		second[x] = sqrt(first[x]);

	for (x = 0; x < size; x++)
		printf("The sequare root of %d is %.2f\n", first[x], second[x]);
	return 0;
}