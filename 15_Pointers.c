#include<stdio.h>

int main()
{
	int *ptr;
	int a;
	int b;
	a=10;
	ptr=&a;
	b=a;
	printf("The value of a is %d\n",a);
	printf("*ptr is %d\n", *ptr);
	printf("The value of b is %d\n",b);
	printf("The value of a is now %d\n",a);
	return 0;
}	
