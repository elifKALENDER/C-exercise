#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159
#endif

int main()
{
	const float amplitude = 70, wavelenghth = 0.1;
	float graph, s, x;

	for (graph = 0; graph < M_PI; graph += wavelenghth) {
		s = sin(graph);
		for (x = 0; x < s * amplitude; x++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}