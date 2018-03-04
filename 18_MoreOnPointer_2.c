#include<stdio.h>

const int MAX=3;

int main()
{
	int var[]={10,100,1000};
	char var2[]={'A','B','C'};
	int i,*ptr,*ptr2;
	ptr=var;
	ptr2=var2;
	for(i=0;i<MAX;i++)
	{
		printf("The address of var[%d] is %x\n",i,ptr);
		printf("The value of var[%d] is %d\n",i,*ptr);
		ptr++;
	}
	for(i=0;i<MAX;i++)
	{
		printf("The address of var2[%d] is %x\n",i,ptr2);
		printf("The value of var2[%d] is %c\n",i,*ptr2);
		ptr2++;
	}
	return 0;
}
