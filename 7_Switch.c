#include<stdio.h>

int main()
{
	char grade='A';
	switch(grade)
	{
	case 'A' :
		printf("Exellent!\n");
		break;
	case 'B' :
	case 'C' :
		printf("Well done!\n");
		break;
	case 'D' :
		printf("You passed\n");
		break;
	case 'F' :
		printf("Better try again!\n");
		break;
	default :
		printf("Invalid grade\n");
	}
	printf("your grade id %c\n",grade);
	return 0;
}

