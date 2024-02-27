#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

void discount(float* a);

int main()
{
	float price = 42.99;

	printf("the item costs $%.2f\n", price);
	discount(&price);
	printf("With the discount, that's $5.2f\n", price);
	return 0;
}

void discount(float* a)
{
	*a *= 0.90;
}