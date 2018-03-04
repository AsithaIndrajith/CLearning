#include<stdio.h>
const int MAX=3;
int main()
{
	int var[]={10,100,1000};
	int i,*ptr[MAX],*ptr2[MAX];
	for(i=0;i<MAX;i++)
	{
		ptr[i]=&var[i];
		ptr2[i]=var[i];
	}
	for(i=0;i<MAX;i++)
	{
		printf("The value of var[%d] is %d\n",i,ptr2[i]);
		printf("The value of var[%d] is %d\n",i,*ptr[i]);
		printf("The address of var[%d] is %x\n",i,ptr[i]);
	}
	return 0;
}
