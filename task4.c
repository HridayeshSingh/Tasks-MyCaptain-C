#include<stdio.h>
#include<string.h>
main()
{
	char fname[30],lname[10];
	printf("Enter your FIRST NAME : ");
	gets(fname);
	printf("Enter your LAST NAME : ");
	gets(lname);
	strcat(fname," ");
	strcat(fname,lname);
	printf("\nYour FULL NAME is : %s",fname);
}
