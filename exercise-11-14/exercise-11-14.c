#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	float degrees, radians;

	printf("Enter an angle in radians: ");
	scanf("%f", &radians);
	degrees = 57.2957795 * radians;
	printf("%.2f radians is %.2f degress.\n", radians, degrees);
	return 0;
}