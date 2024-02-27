#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int numbers[10];
	int x;
	int* pn;

	pn = numbers;

	for (x = 0; x < 10; x++) {

		printf("numbers[%d]=%d, address %p\n",
			x, *pn, pn);
		pn++;
	}
	return 0;
}