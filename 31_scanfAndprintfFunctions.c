#include<stdio.h>

int main()
{
	char name[100];
	int num;
        printf("Using scanf() and printf()\n");
	printf("Enter a value: ");
	scanf("%s %d",name,&num);
	printf("\nYou entered: %s %d\n",name,num);        
	return 0;
}
