#pragma warning(disable:4996)//scanf_s sorunu i�in
#include <stdio.h>

int main()
{
	int fav;

	printf("What is your favorite number: ");
	scanf("%d", &fav);
	printf("%d is my favorite number, too!\n", fav);
	return 0;
}