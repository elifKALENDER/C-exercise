#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>

int main()
{
	int a, b, larger;

	printf("Enter value A: ");
	scanf("%d", &a);
	printf("Enter different value B: ");
	scanf("%d", &b);

	if (a > b)
		larger = a;
	else
		larger = b;
	printf("Value %d is larger.\n", larger);
		return 0;
}

/*int main() {

	int a, b;

	printf("Enter value A: ");
	scanf("%d", &a);
	printf("Enter different value B: ");
	scanf("%d",&b);
	if (a > b)
		printf("Value %d is larger.\n", a);
	else
		printf("Value %d is larger.\n", b);
	return 0; 
}*/