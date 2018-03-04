#include<stdio.h>

int main()
{
	int val=20;
	int *ptr;
	int **pptr;
	ptr=&val;
	pptr=&ptr;
	printf("The value of val is %d\n",val);
	printf("The value of val availble ptr is %d\n",*ptr);
	printf("The value of val availble pptr is %d\n",**pptr);
	return 0;
}
