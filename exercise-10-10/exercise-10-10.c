#pragma warning(disable:4996)//scanf_s sorunu i�in


#include <stdio.h>

float convert(float f);

int main()
{
	float temp_f;

	printf("Temprature in Fahremheit : ");
	scanf("%f", &temp_f);
	printf("%.lfF is %.lfC\n", temp_f, convert(temp_f));
	return 0;
}

float convert(float f) {
	float t;
	t = (f - 32) / 1.8;

	return t;
}