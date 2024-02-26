#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	char hello[] = "Hello!";
	int i = 0;

		while (hello[i])
		{
			printf("%c at %p\n", hello[i], &hello[i]);
			i++;
		}
	return 0;
}