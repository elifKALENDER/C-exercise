#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	enum weekdays{mon ,tues,wed,thurs,fri};
	float temps[5] = { 18.7, 22.8, 25.0, 23.3, 23.2 };
	float* t;

	t = temps;
	printf("The tempratures on thuesday was %.1f\n",
		*(t + tues));
	printf("The temprature on Friday ws %.1f\n",
		*(t + fri));
	return 0;
}