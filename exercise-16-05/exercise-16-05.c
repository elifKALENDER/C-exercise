#pragma warning(disable:4996)//scanf_s sorunu i�in

#include <stdio.h>

void proc(void);

int main()
{
	puts("First call");
	proc();
	puts("Second call");
	proc();
	return 0;
}

void pro�c(void) {

	int a;

	printf("The value of valuable a is %d\n", a);
	printf("Enter a new value: ");
	scanf("%d", &a);
}