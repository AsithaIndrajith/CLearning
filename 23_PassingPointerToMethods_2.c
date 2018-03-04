#include<stdio.h>

int getAverage(int *arr,int size);

int main()
{
	int _arr[]={100,200,300,400,500};
	double avg;
	avg =getAverage(_arr,5);
	printf("The average is %f\n",avg);
	return 0;
}

int getAverage(int *arr,int size)
{
	int i,sum=0;
	double avg;
	for(i=0;i<size;i++)
	{
		sum+= arr[i];
	}
	avg=(double)sum/size;
	return avg;
}
