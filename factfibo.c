#include<stdio.h>
int fact(int n);
int fibo(int n);
int factfibo(int n);

int main()
{
	printf("%d\n",factfibo(4));
	return 0;
}



int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibo(n-2)+fibo(n-1);
	}
}

int factfibo(int n)
{
	return fact(n)+fibo(n);
}
