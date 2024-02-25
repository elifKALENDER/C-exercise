#pragma warning(disable:4996)//scanf_s sorunu için

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Press Enter to clear the screen: ");
	getchar();
	system("cls");
	puts("That's better");
	return 0;
}

//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	printf("Press Enter to clear the screen:");
//	getchar();
//	system("clear");
//	puts("That's better");
//	return(0);
//}