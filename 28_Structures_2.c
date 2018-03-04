#include<stdio.h>

struct
{
	unsigned int widthValidated;
	unsigned int heightValidated;
} status1;

struct
{
	unsigned int widthValidated :1 ;
	unsigned int heightValidated : 1;
} status2;

int main()
{
	printf("The size of Memory taken by status1 is: %d\n",sizeof(status1));
	printf("The size of Memory taken by status2 is: %d\n",sizeof(status2));
	return 0;
}
