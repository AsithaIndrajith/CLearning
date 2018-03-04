#include<stdio.h>

void toBinary(int decimal);

int main()
{
	toBinary(1000);
	printf("\n");
}

void toBinary(int decimal)
{
	int remainder=decimal%2;
	
	if(decimal==1)
	{
		printf("%d", 1);
	}
	else
	{
		toBinary(decimal/2);
		printf("%d",remainder);
	}
}
