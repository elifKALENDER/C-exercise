#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	float alpha;

	alpha = 501;
	printf("alpha=%.lf\n", alpha);
	alpha += 99;
	printf("alpha=%.lf\n", alpha);
	alpha -= 250;
	printf("alpha=%.lf\n", alpha);
	alpha /= 82;
	printf("alpha=%.lf\n", alpha);
	alpha *= 4.3;
	printf("alpha=%.lf\n", alpha);
	return 0;
}