#include<stdio.h>

int main()
{
	int _array[10];
	int _array2[]={10,2,3,4,6,7,3,2,67,34};

	for(int i=0;i<10;i++)
	{
	_array[i]=i+20;
	}
	for(int j=0;j<10;j++)
	{
	printf("The %d value is %d\n",j+1,_array[j]);
	}
	return 0;
}

