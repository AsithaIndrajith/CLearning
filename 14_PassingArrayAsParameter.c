#include<stdio.h>

double getAverage(int arr[],int size);

int main()
{
	int arr[]={1,2,3,4,5};
	int size=5;
	double result;
	result=getAverage(arr,size);
	printf("The average of the array is: %f\n",result);
	return 0;
}

double getAverage(int arr[],int size)
{
	int sum;
	int i;
	double avg;
	for(i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	avg=sum/size;
	return avg;
}
