#include<stdio.h>

int main()
{
	printf("Using getchar() and putchar()\n");
	int c;
	printf("Enter a value: ");
	c=getchar();
	printf("\nYou entered: ");
	putchar(c);
	printf("\n");
	return 0;
}
