#include<stdio.h>
#include<string.h>
struct book
{
	char title[50];
	char author[50];
	char subject[50];
	int book_id;
	
};

void printBook(struct book book);

int main()
{
	struct book book1;
	
	strcpy(book1.title,"C Programming");
	strcpy(book1.author,"Nuha Ali");
	strcpy(book1.subject,"Programming");
	book1.book_id=6987654;
	printBook(book1);
	return 0;
}

void printBook(struct book book)
{
	printf("The title of the Book1 is %s\n",book.title);
	printf("The Author of Book1 is %s\n", book.author);
	printf("The Subject of Book1 is %s\n",book.subject);
	printf("The Book Id is %d\n",book.book_id);
	return;
}
