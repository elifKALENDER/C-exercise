#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

int main()
{
	char sample[] = "Feom whence cometh my help?\n";
	char* ps;

	ps = sample;

	while (putchar(*ps++));
	return 0;
}