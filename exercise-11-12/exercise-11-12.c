#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <math.h>

int main()
{
	float twos;

	puts("The Holy Numbers of Computing");
	for (twos = 0.0; twos <= 10.0; twos++)
		printf("2^%.0f=%.0f\n", twos, pow(2.0, twos));
	return 0;
}