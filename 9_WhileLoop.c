#include<stdio.h>
int main()
{
	int a=10;
	int c=0;
	while(a/2 >= 1)
	{
		c=a%2;	
		printf("%d\n",c);
		a=a/2;
	}
	printf("%d\n",1);
	return 0;
}

