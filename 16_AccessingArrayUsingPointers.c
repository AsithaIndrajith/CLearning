#include<stdio.h>

int main()
{
	int _arr[5]={100,34,56,78,98};
	int *p;
	int i;
	p=_arr;
	for(i=0;i<5;i++)
        {
                printf("The value of *(p+%d) is: %d ",i,*(p+i));
        }

	for(i=0;i<5;i++)
	{
		printf("The value of *(_arr+%d) is: %d\n",i,*(_arr+i));
	}
	return 0;
}

