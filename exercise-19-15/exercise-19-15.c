#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char* sample = "From whence cometh my help?\n";

	while (putchar(*sample++))
		;
	return 0;
}