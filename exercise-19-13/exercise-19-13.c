#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	char sample[] = "From whence cometh my help?\n";
	char* ps;

	ps = sample;

	while (*ps)
	{
		putchar(*ps);
		ps++;
	}
	return 0;
}