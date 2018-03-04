#include<stdio.h>

int main()
{
        printf("Using gets() and puts()\n");
        char b[20];
        printf("Enter a line: ");
        gets(b);
        printf("\nYou entered: ");
        puts(b);
        printf("\n");


        return 0;
}
