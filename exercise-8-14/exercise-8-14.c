#pragma warning(disable:4996)//scanf_s sorunu i�in


#include <stdio.h>

int main()
{
	int coordinate;

	printf("Input target coordinate: ");
	scanf("%d", &coordinate);
	if (coordinate >= -5 && coordinate <= 5) {
		puts("Close enough!");
	}
	else {
		puts("Targets is out of range!");
	}
	return 0;
}