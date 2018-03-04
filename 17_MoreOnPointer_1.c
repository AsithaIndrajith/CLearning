#include<stdio.h>

int main()
{
	unsigned int val=10;
	int *nullp=NULL;
	unsigned int *p;
	p=&val;
	printf("The address of val using &val is %x\n",&val);
	printf("The address of val using p is %x\n",p);
	printf("The value of val using *p is: %d\n",*p);
	printf("The value of nullp is %d\n",nullp);
	printf("The address of nullp is %x\n",nullp);
	if(nullp)
	{
		printf("This not a null pointer\n");
	}
	else
	{
		printf("This is a null pointer\n");
	}
	return 0;
}
