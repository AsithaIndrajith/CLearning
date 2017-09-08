#include<stdio.h>

int factorial(int n)
{
	if(n>1)
	{
		printf("%d",n);
		printf("*");
		return n*factorial(n-1);
	}
	else
	{
		printf("%d",1);
		return 1;
	}
}
int main()
{
	int n=30;
	printf(": %d\n",factorial(n));
	return 0;
}
