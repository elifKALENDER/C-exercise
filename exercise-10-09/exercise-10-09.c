#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

float convert(float f);

int main()
{
	float temp_f, temp_c;

	printf("Temprature in Fahrenheit: ");
	scanf("%f", &temp_f);
	temp_c = convert(temp_f);
	printf("%.lfF is %.lfC\n", temp_f, temp_c);
	return 0;
}

float convert(float f) {
	float t;

	t = (f - 32) / 1.8;
	return t;
}