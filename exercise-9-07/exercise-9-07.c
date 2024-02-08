#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int backwards;

	for (backwards = 25; backwards >= 0; backwards = backwards - 1)
		printf("%d\n", backwards);

	return 0;
}
