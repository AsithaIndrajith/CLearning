#include<stdio.h>
int max(int a,int b);

int main()
{
	int num1=20;
	int num2=30;
	int c;
	c=max(num1,num2);
	printf("The maximum number is %d\n",c);
	return 0;
}

int max(int a,int b)
{
	int result;
	if(a>b)
	{
		result=a;
	}
	else
	{
		result=b;
	}
	return result;
}

