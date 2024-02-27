#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	float* temprature;
	int c;

	temprature = (float*)malloc(sizeof(float) * 1);
	if (temprature == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	printf("What is the temprature? ");
	scanf("%f", temprature);
	getchar();
	printf("Is this value (C)elsius or (F)ahrenheit? ");
	c = toupper(getchar());

	if (c == 'F')
	{
		printf("%.2f Fahremheit is ", *temprature);
		*temprature = (*temprature + 459.67) * (5.0 / 9.0);
		printf("%.2f Kelvin\n", *temprature);
	}
	else if (c == 'C')
	{
		printf("%.2f Celsius is ", *temprature);
		*temprature += 273, 15;
		printf("%.2f Kelvin\n", *temprature);
	}
	else if (c == 'C')
	{
		printf("%.2f Celsius is ", *temprature);
		*temprature += 273.15;
		printf("%.2f Kelvin\n", *temprature);
	}
	else
		puts("Invalid response");

	return 0;
	
}