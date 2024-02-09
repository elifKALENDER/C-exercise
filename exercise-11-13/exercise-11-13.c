#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	float degress, radians;

	printf("Enter an angle in degress: ");
	scanf("%f", &degress);
	radians = 0.0174532925 * degress;
	printf("%.2f degrees is %.2f radians.\n",
		degress, radians);
	return 0;
}