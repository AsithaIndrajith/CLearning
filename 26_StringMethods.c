#include<stdio.h>
#include<string.h>
int main()
{	
	char str1[]="Hello";
	char str2[]="World";
	char str3;
	int len;
	int cmpr;
	char *p;
	char o='o';
	//copy str1 in to str2
	strcpy(str1,str2);
	printf("strcpy(str1,str2): %s\n",str1);
	//concat str1 with str2
	strcat(str1,str2);
	printf("strcat(str1,str2): %s\n",str1);
	//return len of concated str3(it should be 10)
	len=strlen(str1);
	printf("strlen(str1): %d\n",len);
	//compare str1 and str2
	cmpr=strcmp(str1,str2);
	printf("strcmp(str1,str2): %d\n",cmpr);
	// return a pointer
	p=strchr(str1,o);
	printf("strchr(str1,'o'): %s\n",p);
	return 0;
}
