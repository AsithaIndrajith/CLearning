#include<stdio.h>

void reverseString(char S[],int i,int j);

int main()
{
	char S[]="String";
	int i=0;
	int j=6;
	reverseString(S,i,j);
	return 0;
}

void reverseString(char S[],int i,int j)
{	
	if(i<j)
	{
		reverseString(S,i+1,j);
		printf("%c",S[i]);
	}
	else
	{
		return;
	}
}

