#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>


int main()
{
	int v = 1812;
	int* pv = &v;

	printf("The value if 'v' is %d\n", *pv);
	return 0;
}