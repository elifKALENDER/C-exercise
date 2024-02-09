#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	float halfstep;

	halfstep = -5.0;
	while (halfstep <= 5.0) {
		printf("%.lf\n", halfstep);
		halfstep = halfstep + 0.5;
	}
	return 0;
}