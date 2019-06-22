#include<stdio.h>
struct book
{
	char title[30];
	char author[30];
	char genre[30];
}b;

void readDetails();
void printDetails();

main()
{
	readDetails();
	printDetails();
}

void readDetails()
{
	printf("Enter the following details of the book :\n");
	printf("1. Title :\t");
	fgets(b.title,30,stdin);
	printf("2. Author :\t");
	fgets(b.author,30,stdin);
	printf("3. Genre :\t");
	fgets(b.genre,30,stdin);
}

void printDetails()
{
	printf("---------------------------------------\n");
	printf("The details of the book are as follows:\n");
	printf("1. Title : \t%s",b.title);
	printf("2. Author : \t%s",b.author);
	printf("3. Genre : \t%s",b.genre);
}
